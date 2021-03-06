// TestConsole.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include "Mesh.h"
void testProblem()
{
	Mesh a(100, 100);
	Wire w1(2);
	Wire w2(4);
	Wire w4(5);
	Wire w3(1);
	Wire w5(6);
	Wire w6(4);

	a.placeWire(&w1, 1, 6, 'H');
	a.placeWire(&w2, 0, 0, 'H');
	a.placeWire(&w3, 0, 1, 'H');
	a.placeWire(&w4, 1, 1, 'V');
	a.placeWire(&w5, 4, 0, 'V');
	a.placeWire(&w6, 6, 2, 'V');

	std::cout << "Wire at position 1, 1 is connected to " << a.getNoConnections(&w4) << " other wires" << std::endl;
	std::cout << "Longest connection is: " << a.longestContConn() << std::endl;


}
int main() 
{
	testProblem();
	return 1;
}
