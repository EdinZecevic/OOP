#pragma once

#include "Point.h"
#include "Vector.h"

template <typename T>
class Polyline
{
protected:
	ee221::vector<Point<T>> _points;

public:
	//add constructors & destructors 
	Polyline()
		:_points()
	{
	}
	Polyline(const ee221::vector<Point<T>>& p) //copy constructor
	{
		_points = p;
	}

	Polyline(ee221::vector<Point<T>>&& p) //move constructor
	{
		_points = p;
	}

	Polyline (const Polyline& p) //copy constructor
	{
		_points = p._points;
	}
	Polyline (Polyline&& p) //move constructor
	{
		_points = p._points;
	}
	Polyline& operator=(const Polyline& p) //copy assignment operator
	{
		_points = p._points;
	}
	Polyline& operator=(Polyline&& p) //move assignment operator
	{
		_points = p._points;
	}
	 

	void addPoint(const Point& p);

	const T length();
	const bool isStraight();
	void moveFor(const Size& s);
	void operator+=(const Size& p);

};