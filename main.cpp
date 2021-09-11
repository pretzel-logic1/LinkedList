#include "LinkedList.h"
#include "LinkedList.cpp"
#include <iostream>
#include <string>

int main() {
	LinkedList ls;
	ls.insertToFront("Hawkeye");
	ls.insertToFront("Thor");
	ls.insertToFront("Hulk");
	ls.insertToFront("Black Widow");
	ls.insertToFront("Iron Man");
	ls.insertToFront("Captain America");
	ls.printList();
}