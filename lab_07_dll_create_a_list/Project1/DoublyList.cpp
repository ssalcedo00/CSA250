#include "DoublyList.h"

	// constructor
DoublyList::DoublyList()
{
	first = nullptr;
	last = nullptr;
	count = 0;
}

	// destructor
DoublyList::~DoublyList()
{
	destroyList();
}

	// destroyList
void DoublyList::destroyList()
{ 
	Node  *temp = first;
	
    while (first != nullptr)
    {
        first = first->getNext();
        delete temp;
		temp = first;
    }

    last = nullptr;
	count = 0;
}

// Functions to test your code
void DoublyList::printForward() const
{
	if (first == nullptr)
		cerr << "List is empty." << endl;
	else
	{
		Node *temp = first;
		while (temp != nullptr)
		{
			cout << temp->getData() << " ";
			temp = temp->getNext();
		}
	}
}

void DoublyList::printReverse() const
{
	if (first == nullptr)
		cerr << "List is empty." << endl;
	else
	{
		Node *temp = last;
		while (temp != nullptr)
		{
			cout << temp->getData() << " ";
			temp = temp->getPrev();
		}
	}
}

int DoublyList::getCount() const
{
	return count;
}

int DoublyList::getFirstElement() const
{
	if (first == nullptr)
	{
		cerr << "List is empty." << endl;
		return -999;
	}
	else
	{
		return first->getData();
	}
}

int DoublyList::getLastElement() const
{
	if (first == nullptr)
	{
		cerr << "List is empty." << endl;
		return -999;
	}
	else
	{
		return last->getData();
	}
}

Node* DoublyList::getPtrPrevOfFirst() const
{
	if (first == nullptr)
	{
		cerr << "List is empty." << endl;
		return nullptr;
	}
	else
	{
		return first->getPrev();
	}
}

Node* DoublyList::getPtrNextOfLast() const
{
	if (first == nullptr)
	{
		cerr << "List is empty." << endl;
		return nullptr;
	}
	else
	{
		return last->getNext();
	}
}

void DoublyList::testAll() const
{
	cout << "Forward print: ";
	printForward();
	cout << endl;
	cout << "Reverse print: ";
	printReverse();
	cout << endl;
	cout << "Count: " << getCount() << endl;
	cout << "First Element: " << getFirstElement() << endl;
	cout << "Last Element: " << getLastElement() << endl;
	cout << "Pointer prev of first node should be NULL: " << getPtrPrevOfFirst() << endl;
	cout << "Pointer next of last node should be NULL: " << getPtrNextOfLast() << endl;
	cout << "\n\n======================================================================\n";

}