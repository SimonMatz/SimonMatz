#include "LinkedList.h"
#include <string>

void LinkedList::displayList()
{
	Node* iterator = head;
	while (iterator != NULL)
	{
		cout << iterator->number << " ";
		iterator = iterator->next;
	}
}

void LinkedList::insertAtBeginning(int amountOfNumbers)
{
	int number = rand();
	for (int i = 0; i < amountOfNumbers; i++)
	{
	Node* newNode = new Node(number);
	newNode->next = head;
	head = newNode;
	}	
}

void LinkedList::insertAtEnd(int amountOfNumbers)
{
	int number = rand();
	
	for (int i = 0; i < amountOfNumbers; i++)
	{
		if (head == NULL)
		{
			insertAtBeginning(amountOfNumbers);
			return;
		}
		Node* newNode = new Node(number);
		Node* iterator = head;
		while (iterator->next != NULL)
		{
			iterator = iterator->next;
		}
		iterator->next = newNode;
	}
}

void LinkedList::deleteFromBeginning(int amountOfNumbers)
{
	for (int i = 0; i < amountOfNumbers; i++)
	{
		if (head == NULL)
			return;

		Node* iterator = head;
		head = head->next;
		delete iterator;
	}
}


void LinkedList::deleteFromEnd(int amountOfNumbers)
{
	for (int i = 0; i < amountOfNumbers; i++)
	{
		if (head == NULL)
			return;

		Node* iterator = head;
		Node* previous = head;
		while (iterator->next != NULL)
		{
			previous = iterator;
			iterator = iterator->next;
		}
		previous->next = NULL;
		delete iterator;
	}
}
