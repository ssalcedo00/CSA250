/*
Phan, Thang
Salcedo, Salvador
Nguyen, Tony
Kim, Ji Soo

CS A250
September 29th, 2018

Lab 5
*/

#include "DoublyList.h"

// Definition function print
void DoublyList::print() const
{
	Node *current = first;

	while (current != nullptr)
	{
		cout << current->getData() << " ";
		current = current->getNext();
	}
}

// Definition function reversePrint
void DoublyList::reversePrint() const
{
	Node *current = last;

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
void DoublyList::copyToList(DoublyList& myList)
{
	Node *current = first;

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
	if (!count)
		cerr << "Cannot delete from an empty list.";
	else
	{
		Node *current = first;

		if (first->getData() == intDelete) // node to delete is first
		{
			first = first->getNext();
			delete current;
			current = nullptr;
			count--;
		}
		else if (last->getData() == intDelete) // node to delete is last
		{
			current = last;
			last = last->getPrev();
			last->setNext(nullptr);
			delete current;
			current = nullptr;
			count--;
		}
		else // node to be deleted is in the middle
		{
			bool found = false;

			while (current != nullptr && (!found))
			{
				if (current->getData() == intDelete)
				{
					current->getNext()->setPrev(current->getPrev());
					current->getPrev()->setNext(current->getNext());
					delete current;
					current = nullptr;
					count--;
					found = true;
				}
				else
				{
					current = current->getNext();
				}
			}
			if (!found)
				cerr << "Item to be deleted is not in the list.";
		}
	}
}