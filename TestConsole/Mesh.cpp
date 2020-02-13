#include "stdafx.h"
#include "Mesh.h"


Mesh::Mesh(int x, int y)
{
	_sizeX = x;
	_sizeY = y;
}

bool Mesh::placeWire(Wire* wire, int x, int y, char direction)
{
	_wires.push_back(wire);
	wire->placeWire(x, y, direction);
	return true;
}

int Mesh::getWireCount()
{
	return _wires.size();
}

int Mesh::getNoConnections(Wire * w)
{
	int numConn = 0;
	for(auto wire : _wires)
	{
		if (w->isConnectedTo(wire))
			++numConn;
	}
	return numConn - 1;
}

int Mesh::longestContConn()
{
	int maxLen = 0;
	for (int i = 0; i < getWireCount(); ++i)
	{
		Wire* currentWire = _wires[i];
		int currLen = currentWire->getLength();

		std::vector<bool> currentLines(getWireCount(), false);
		currentLines[i] = true;
		for (int j = 0; j < getWireCount(); ++j)
		{
			Wire* otherWire = _wires[j];

			if (currentLines[j])
				continue;

			if (currentWire->isConnectedTo(otherWire))
			{
				currentLines[j] = true;

				currLen += otherWire->getLength();
				currentWire = otherWire;
				j = -1;
			}
		}

		if (currLen > maxLen)
			maxLen = currLen;
	}
	return maxLen;
}


Mesh::~Mesh()
{
}
