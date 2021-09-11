// LinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "LinkedList.h"
#include <iostream>
#include <string>

// default constructor
LinkedList::LinkedList() {
	head = nullptr;
}

// copy constructor
LinkedList::LinkedList(const LinkedList& rhs) {

}

// Destroys all the dynamically allocated memory
// in the list.
LinkedList::~LinkedList() {
	Node* temp;
	Node* pointer1 = head;
	while ( pointer1 != nullptr) {
		temp = pointer1->next;
		delete pointer1;
		pointer1 = temp;
	}
}

// assignment operator
const LinkedList& operator=(const LinkedList& rhs) {

}

// Inserts val at the front of the list
void LinkedList::insertToFront(const ItemType& val) {
	// Dynamically allocates newNode. newNode's value is assigned by the parameter.
	Node* newNode = new Node();
	newNode = nullptr;
	(*newNode).value = val;

	// New node temp is assigned to head->next (the original first node in the linked list).
	// The first node becomes newNode. newNode's next pointer becomes temp ^.
	Node* temp = head->next;
	head->next = newNode;
	newNode->next = temp;
}

// Prints the LinkedList
void LinkedList::printList() const {
	ItemType n = "";

	for (int i = 0; i < size(); i++) {
		get(i, n);
		std::cout << n << std::endl;
	}
}

// Sets item to the value at position i in this
// LinkedList and return true, returns false if 
// there is no element i
bool LinkedList::get(int i, ItemType& item) const {
	if (i < size() && i >= 0) {
		int j = 0;
		Node* temp = head;

		while (j != i) {
			temp = head->next;
			j++;
		}

		item = (*temp).value;
		return true;
	}
	else {
		return false;
	}

}

// Reverses the LinkedList
void reverseList();

// Prints the LinkedList in reverse order
void printReverse() const;

// Appends the values of other onto the end of this
// LinkedList.
void append(const LinkedList& other);

// Exchange the contents of this LinkedList with the other 
// one.
void swap(LinkedList& other);

// Returns the number of items in the Linked List.
int LinkedList::size() const {
	int i = 0;
	Node* temp = head;

	// temp will go through every node in the linked list
	// until it reaches the end and is nullptr, at which point
	// i is returned.
	while (temp != nullptr) {
		i++;
		temp = temp->next;
	}

	return i;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
