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
#include "DoublyList.cpp"

#include <iostream>
#include <string>
using namespace std;

template <typename T>
void testing(DoublyList<T>& aList);

int main()
{
	// First test case
	//DoublyList intList;
	//intList.insert(1);
	//intList.insert(2);
	//intList.insert(3);
	//testing(intList);

	// Second test case
	DoublyList<int> intList;
	intList.insert(1);
	intList.insert(2);
	intList.insert(3);
	testing(intList);

	// Third test case
	DoublyList<string> stringList;
	stringList.insert("chocolate");
	stringList.insert("vanilla");
	stringList.insert("strawberry");
	stringList.insert("pistacchio");
	testing(stringList);

	cout << endl;
	system("Pause");
	return 0;
}

template <typename T>
void testing(DoublyList<T>& aList)
{
	if (aList.isEmpty())
	{
		cerr << "List is empty." << endl;
	}
	else
	{
		cout << "List is: " << aList << endl;
		cout << "First element is: " << aList.firstElem() << endl;
	}

	cout << "Emptying the list..." << endl;
	aList.destroyList();

	if (aList.isEmpty())
		cerr << "List is empty." << endl;
	else
		cout << "List is: " << aList << endl;

	cout << endl;
}

