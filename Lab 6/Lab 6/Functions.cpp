/*
	(name header)
*/

#include "AnyList.h"

// Definition of overloaded insertion stream operator as a friend function
void operator<<(ostream & out, AnyList list) {
	if (!list.count) cerr << "List is empty." << endl;
	Node * head = list.first;
	for (int i = 0; i < list.count; i++) {
		out << head->getData();
		if(head->getNext() != nullptr) head = head->getNext();
	}
	delete head;
	head = nullptr;
	out << endl;
}


// Definition of overloaded comparison operator == as a member function
bool AnyList::operator==(AnyList list) {
	if (count != list.count) return false;
	else {
		bool notEqual = false;
		Node * callPtr = first;
		Node * refPtr = list.first;
		while (callPtr->getNext() != nullptr) {
			if (callPtr->getData() != refPtr->getData())
				return false;
			else {
				callPtr = callPtr->getNext();
				refPtr = refPtr->getNext();
			}
		}
		delete callPtr;
		delete refPtr;
		callPtr = nullptr;
		refPtr = nullptr;
	}
	return true;
}
