#pragma once
class Wire
{
	int _x, _y;
	int _length;
	char _direction;
public:
	void placeWire(int x, int y, char direction);
	int getLength();
	void setDir(char direction);
	void setX(int x);
	char getDir();
	int getX();
	int getY();
	bool isConnectedTo(Wire* otherWire);

	Wire(int len);
	~Wire();
};

