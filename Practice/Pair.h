#pragma once

template<typename T1, typename T2>
class Pair
{
protected:
	T1 _first;
	T2 _second;
public:
	Pair()
		:_first()
		, _second()
	{

	}
	Pair(T1& f, T2& s) //constructor
	{
		_first = f;
		_second = s;

	}

	Pair(const Pair& other) //copy constructor
	{
		_firstÿ = other._first;
		_second = other._second;
	}
	Pair(Pair&& other) //move constructor
	{
		_firstÿ = other._first;
		_second = other._second;
	}
	Pair& operator=(const Pair& other) //copy assignment operator
	{
		_firstÿ = other._first;
		_second = other._second;
	}
	Pair& operator=(Pair&& other) //move assignment operator
	{
		_firstÿ = other._first;
		_second = other._second;
	}
	~Pair() //destructor
	{
	}
	const T1& first()
	{
		return _first;
	}
	const T2& second()
	{
		return _second;
	}
	void setF(const T1& f)
	{
		_first = f;
	}
	void setS(const T2& s)
	{
		_second = s;
	}
	void setF(T1&& f)
	{
		_first = f;
	}
	void setS(T2&& s)
	{
		_second = s;
	}
	void set(const T1& f, const T2& s)
	{
		_first = f;
		_second = s;
	}
	void set(const T1& f, T2&& s)
	{
		_first = f;
		_second = s;
	}
	void set(T1&& f, const T2& s)
	{
		_first = f;
		_second = s;
	}
	void set(T1&& f, T2&& s)
	{
		_first = f;
		_second = s;
	}
};