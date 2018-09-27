#include "DoublyList.h"

void functionCall(DoublyList& list1, DoublyList& list2,
	const string& func, int& elem)
{
	//if (func == "print") list1.print();
	//else if (func == "reversePrint") list1.reversePrint();
	//else if (func == "front") elem = list1.front();
	//else if (func == "back") elem = list1.back();
	//else if (func == "copyToList") list1.copyToList(list2);
	//else list1.deleteElem(elem);
}

void testPrint()
{
	int elem = 0;
	DoublyList myList, emptyList;

	for (int i = 1; i < 7; ++i)
		myList.insertBack(i);

	cout << "TESTING: print()"
		<< "\nEXPECTED OUTPUT: 1 2 3 4 5 6";
	cout << "\n    YOUR OUTPUT: ";
	functionCall(myList, emptyList, "print", elem);
}

void testReversePrint()
{
	int elem = 0;
	DoublyList myList, emptyList;

	for (int i = 1; i < 7; ++i)
		myList.insertBack(i);

	cout << "\n\nTESTING: reversePrint()"
		<< "\nEXPECTED OUTPUT: 6 5 4 3 2 1";
	cout << "\n    YOUR OUTPUT: ";
	functionCall(myList, emptyList, "reversePrint", elem);
}

void testFront()
{
	int elem = 0;
	DoublyList myList, emptyList;

	for (int i = 1; i < 7; ++i)
		myList.insertBack(i);

	cout << "\n\nTESTING: front()"
		<< "\nEXPECTED OUTPUT: 1";
	cout << "\n    YOUR OUTPUT: ";
	int frontElem = 0;
	functionCall(myList, emptyList, "front", frontElem);
	cout << frontElem;
}

void testBack()
{
	int elem = 0;
	DoublyList myList, emptyList;

	for (int i = 1; i < 7; ++i)
		myList.insertBack(i);

	cout << "\n\nTESTING: back()"
		<< "\nEXPECTED OUTPUT: 6";
	cout << "\n    YOUR OUTPUT: ";
	int backElem = 0;
	functionCall(myList, emptyList, "back", backElem);
	cout << backElem;
}

void copyToList()
{
	int elem = 0;
	DoublyList myList, emptyList;

	for (int i = 1; i < 7; ++i)
		myList.insertBack(i);

	cout << "\n\nTESTING: copyToList()";
	DoublyList yourList; // empty list
	functionCall(yourList, myList, "copyToList", elem);
	cout << "\n\n      Parameter object should be: 1 2 3 4 5 6"
		<< "\n        Your parameter object is: ";
	functionCall(myList, emptyList, "print", elem);
	cout << "\nYour parameter object in reverse: ";
	functionCall(myList, emptyList, "reversePrint", elem);

}

void deleteElem()
{
	int elem = 0;
	DoublyList newList, emptyList;
	DoublyList myList;
	for (int i = 1; i < 7; ++i)
		myList.insertBack(i);


	cout << "\n\nTESTING: deleteElem\n";
	if (newList.isEmpty()) cerr << "\nList is empty.";
	else
	{
		functionCall(newList, emptyList, "print", elem);
		cout << "\n    Reverse: ";
		functionCall(myList, emptyList, "reversePrint", elem);
	}
	cout << "\nDelete 5... ";
	int elem5 = 5;
	functionCall(newList, emptyList, "deleteElem", elem5);
	// List has one node, delete node
	newList.insertBack(1);
	cout << "\nList is: ";
	functionCall(newList, emptyList, "print", elem);
	cout << "\nDelete 1... ";
	int elem1 = 1;
	functionCall(newList, emptyList, "", elem1);
	cout << "\nList is now: ";
	if (newList.isEmpty()) cerr << "List is empty.";
	else
	{
		functionCall(newList, emptyList, "print", elem);
		cout << "\n    Reverse: ";
		functionCall(newList, emptyList, "reversePrint", elem);
	}
	// List has one node, does not contain item to delete
	newList.insertBack(10);
	cout << "\n\nList is: ";
	functionCall(newList, emptyList, "print", elem);
	cout << "\nDelete 20 (not in the list)... ";
	int elem20 = 20;
	functionCall(newList, emptyList, "deleteElem", elem20);
	cout << "\nList is now: ";
	if (newList.isEmpty()) cerr << "List is empty.";
	else
	{
		functionCall(newList, emptyList, "print", elem);
		cout << "\n    Reverse: ";
		functionCall(newList, emptyList, "reversePrint", elem);
	}
	// List has several nodes, delete last item
	newList.insertBack(20);
	newList.insertBack(30);
	newList.insertBack(40);
	newList.insertBack(50);
	cout << "\n\nList is: ";
	functionCall(newList, emptyList, "print", elem);
	cout << "\nReverse: ";
	functionCall(newList, emptyList, "reversePrint", elem);
	cout << "\nDelete 50 (last item)... ";
	int lastElem = 0;
	functionCall(newList, emptyList, "back", lastElem);
	functionCall(newList, emptyList, "deleteElem", lastElem);
	cout << "\nList is now: ";
	if (newList.isEmpty()) cerr << "List is empty.";
	else
	{
		functionCall(newList, emptyList, "print", elem);
		cout << "\n    Reverse: ";
		functionCall(newList, emptyList, "reversePrint", elem);
	}
	// List has several nodes, delete first item
	cout << "\n\nList is: ";
	functionCall(newList, emptyList, "print", elem);
	cout << "\nDelete 10 (first item)... ";
	int firstElem = 0;
	functionCall(newList, emptyList, "front", firstElem);
	functionCall(newList, emptyList, "deleteElem", firstElem);
	cout << "\nList is now: ";
	if (newList.isEmpty()) cerr << "List is empty.";
	else
	{
		functionCall(newList, emptyList, "print", elem);
		cout << "\n    Reverse: ";
		functionCall(newList, emptyList, "reversePrint", elem);
	}
	// List has several nodes, delete middle item
	cout << "\n\nList is: ";
	functionCall(newList, emptyList, "print", elem);
	cout << "\nDelete 30 (middle item)... ";
	int elem30 = 30;
	functionCall(newList, emptyList, "deleteElem", elem30);
	cout << "\nList is now: ";
	if (newList.isEmpty()) cerr << "List is empty.";
	else
	{
		functionCall(newList, emptyList, "print", elem);
		cout << "\n    Reverse: ";
		functionCall(newList, emptyList, "reversePrint", elem);
	}
}