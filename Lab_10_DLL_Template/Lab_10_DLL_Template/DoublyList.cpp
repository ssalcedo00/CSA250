/*
	Kim, Ji Soo
	Nguyen, Tony
	Salcedo, Salvador
	Phan, Thang

	CS A250
	November 3, 2018

	Lab 10
*/

#include "DoublyList.h"

template <typename T>
ostream& operator<<(ostream& out, const DoublyList<T>& aList)
{
	Node<T> *current = aList.first;

	while (current != nullptr)
	{
		out << current->getData() << " ";
		current = current->getNext();
	}

	return out;
}

template <typename T>
bool DoublyList<T>::isEmpty() const
{
	return (count == 0);
}

template <typename T>
DoublyList<T>::DoublyList()
{
	first = nullptr;
	last = nullptr;
	count = 0;
}

template <typename T>
void DoublyList<T>::insert(const T& elem)
{
	if (count == 0)
	{
		first = last = new Node<T>(elem, nullptr, nullptr);
	}
	else
	{
		last->setNext(new Node<T>(elem, last, nullptr));
		last = last->getNext();
	}

	++count;
}

template <typename T>
T DoublyList<T>::firstElem() const
{
	return first->getData();
}

template <typename T>
void DoublyList<T>::destroyList()
{ 	
	Node<T> *temp = first;
	
	while (temp != nullptr)
    {        
        first = first->getNext();
        delete temp;
		temp = first;
    }

    last = nullptr;
	count = 0;
}

template <typename T>
DoublyList<T>::~DoublyList()
{
	destroyList();
}
