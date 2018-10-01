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

	// insertFront
void DoublyList::insertBack(int newData)
{
	Node *newNode = new Node(newData, last, nullptr);
	// NOTE: Even if there are no nodes, this statement will
	// work because last would be a nullptr.

	if(first == nullptr) 
    {
       first = last = newNode;
    }
    else
	{
        last->setNext(newNode);	//make last's next link point to the new node
		last = newNode;		//set "last" to the the new node
	}

	++count;
}

// isEmpty
bool DoublyList::isEmpty() const
{
	return (first == nullptr);
}

	// destroyList
void DoublyList::destroyList()
{ 	
    while (first != nullptr)
    {
        Node  *temp = first;
        first = first->getNext();
        delete temp;
		temp = nullptr;
    }

    last = nullptr;
	count = 0;
}