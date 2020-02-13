#pragma once
#include <vector>
#include "Wire.h"

class Mesh
{
	int _sizeX, _sizeY;
	std::vector<Wire*> _wires;
public:
	Mesh(int x, int y);
	bool placeWire(Wire* wire, int x, int y, char direction);
	int getWireCount();
	int getNoConnections(Wire * w);
	int longestContConn();

	~Mesh();
};

