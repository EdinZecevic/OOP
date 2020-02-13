#pragma once
#include "Pair.h"

template<typename T>
class Size : public Pair<T, T>
{
public:
	void setHeight(const T& h) //set function
	{
		_second = h;
	}
	void setWidth(const T& w) //set function
	{
		_first = w;
	}
	const T& height() //get function
	{
		return _second;
	}
	const T& width() //get function
	{
		return _first;
	}
};
