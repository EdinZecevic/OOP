#include "stdafx.h"
#include "Wire.h"


void Wire::placeWire(int x, int y, char direction)
{
	_x = x;
	_y = y;
	_direction = direction;
}

char Wire::getDir()
{
	return _direction;
}

void Wire::setDir(char direction){
	_direction = direction;
}

int Wire::getX()
{
	return _x;
}

void Wire::setX(int x){
	_x = x;
}
int Wire::getY(){
	return _y;
}

int Wire::getLength()
{
	return _length;
}

Wire::Wire(int len)
{
	_length = len;
}

bool Wire::isConnectedTo(Wire* otherWire)
{
	int thisEndX = _x;
	int thisEndY = _y;

	if (_direction == 'H')
		thisEndX += _length;

	if (_direction == 'V')
		thisEndY += _length;

	int otherEndX = otherWire->_x;
	int otherEndY = otherWire->_y;

	if (otherWire->_direction == 'H')
		otherEndX += otherWire->_length;

	if (otherWire->_direction == 'V')
		otherEndY += otherWire->_length;

	if (_x == otherWire->_x && _y == otherWire->_y)
		return true;
	if (_x == otherEndX && _y == otherEndY)
		return true;
	if (thisEndX == otherWire->_x && thisEndY == otherWire->_y)
		return true;
	if (thisEndX == otherEndX && thisEndY == otherEndY)
		return true;

	return false;
}

Wire::~Wire()
{
}
