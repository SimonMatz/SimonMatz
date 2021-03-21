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

void LinkedList::insertAtBeginning(int number)
{
	Node* newNode = new Node(number);

	newNode->next = head;

	head = newNode;
}

void LinkedList::insertAtEnd(int number)
{

	if (head == NULL)
	{
		insertAtBeginning(number);
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

void LinkedList::deleteFromBeginning()
{
	if (head == NULL)
		return;

	Node* iterator = head;
	head = head->next;
	delete iterator;
}

void LinkedList::deleteFromEnd()
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
