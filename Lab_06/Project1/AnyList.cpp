#include "AnyList.h"


//constructor
AnyList::AnyList()
{
	first = NULL;
	count = 0;
}

//insertFront
void AnyList::insertFront(const int a[], int numOfElem)
{	
	for (int i = 0; i < numOfElem; ++i)
	{
		Node *temp = new Node(a[i], first);
		first = temp;
	}

	count = numOfElem;
}

//getNumOfElem
int AnyList::getNumOfElem() const
{
	return count;
}

//destroyList
void AnyList::destroyList()
{ 
    Node  *temp; //pointer to delete the node
	
	while (first != NULL)
    {
		temp = first;
		first = first->getNext();
        delete temp;
		temp = NULL;
    }

	count = 0;
}

//destructor
AnyList::~AnyList()
{
	destroyList();
}
