/*
	Name header
*/

#include "DoublyList.h"

// Definition function print
void DoublyList::print() const
{
	Node * current = first;
	while (current != nullptr)
	{
		cout << current->getData() << " ";
		current = current->getNext();
	}
}

// Definition function reversePrint

void DoublyList::reversePrint() const
{
	Node * current = last;
	while (current != first->getPrev())
	{
		cout << current->getData() << " ";
		current = current->getPrev();
	}
}

// Definition function front
int DoublyList::front() const
{
	return first->getData();
}


// Definition function back
int DoublyList::back() const
{
	return last->getData();
}

// Definition function copyToList
void DoublyList::copyToList(DoublyList & myList)
{
	Node * current = first;
	while (current != nullptr)
	{
		myList.insertBack(current->getData());
		current = current->getNext();
	}
}

// Copies from parameter object to empty calling object


// Definition function deleteElem
void DoublyList::deleteElem(int intDelete)
{
}