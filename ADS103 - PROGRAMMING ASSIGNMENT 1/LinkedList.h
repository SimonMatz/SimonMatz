#pragma once
#include <iostream>
#include "Node.h"

using namespace std;
class LinkedList
{
public:

	Node* head = NULL;

	void displayList();

	void insertAtBeginning(int number);
	void insertAtEnd(int number);
	void deleteFromBeginning();
	void deleteFromEnd();


};

