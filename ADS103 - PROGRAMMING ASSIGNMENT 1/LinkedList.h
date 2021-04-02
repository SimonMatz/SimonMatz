#pragma once
#include <iostream>
#include "Node.h"

using namespace std;

class LinkedList
{
public:

	Node* head = NULL;

	void insertAtBeginning(int amountOfNumbers);
	void insertAtEnd(int amountOfNumbers);
	void deleteFromBeginning(int amountOfNumbers);
	void deleteFromEnd(int amountOfNumbers);
};

