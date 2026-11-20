// Michael Delgado
// COSC 1337
// Ticketing program

#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#include "LinkedList.h"
#include <iostream>

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	
	LinkedList<int> b;
/*	b.push_back(10);
	b.push_back(20);
	b.push_back(30);
	std::cout << b.size() << std::endl; */
	for (int i = 0; i < 1000; i++) {
		b.push_back(10);
	}
	std::cout << b.size() << std::endl;
}


