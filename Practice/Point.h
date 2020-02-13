#pragma once
#include "Size.h"
#include <math.h>

template <typename T>
class Point : public Pair<T, T>
{

public:
	void setY(const T& h) //set function
	{
		_second = h;
	}
	void setX(const T& w) //set function
	{
		_first = w;
	}
	const T& Y() //get function
	{
		return _second;
	}
	const T& X() //get function
	{
		return _first;
	}
	const Point& operator+=(const Size& size)
	{
		_first = _first + X();
		_second = _second + Y();
	}
	const Point& operator-=(const Size& size)
	{
		_first = _first - X();
		_second = _second - Y();
	}
	friend const T distance(const T& p1, const T& p2)
	{
		return sqrt((p1.X() - p2.X())*(p1.X() - p2.X()) + (p1.Y() - p2.Y())*(p1.Y() - p2.Y()));
	}
	friend const Size& operator-(const T& p1, const T& p2)
	{
		return sqrt((p1.X() - p2.X())*(p1.X() - p2.X()) + (p1.Y() - p2.Y())*(p1.Y() - p2.Y()));
	}

	
};
