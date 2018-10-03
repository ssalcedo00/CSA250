/*
	(name header)
*/

#include "AnyList.h"

// Definition of overloaded insertion stream operator as a friend function
ostream& operator<<(ostream & out, const AnyList& list) {
	if (!list.count) cerr << "List is empty." << endl;
	Node * head = list.first;
	while (head != nullptr) {
		out << head->getData() << " ";
		head = head->getNext();
	}
	return out;
}


// Definition of overloaded comparison operator == as a member function

bool AnyList::operator==(const AnyList & list) const
{
	if (count != list.count) return false;
	else {
		Node * objPtr = first;
		Node * refPtr = list.first;
		while (objPtr->getNext() != nullptr) {
			if (objPtr->getData() != refPtr->getData()) {
				objPtr = nullptr;
				refPtr = nullptr;
				return false;
			}
			objPtr = objPtr->getNext();
			refPtr = refPtr->getNext();
		}
		objPtr = nullptr;
		refPtr = nullptr;
	}
	return true;
}
