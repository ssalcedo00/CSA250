/*
	(name header)
*/

#include "AnyList.h"

// Definition of overloaded insertion stream operator as a friend functionn


// Definition of overloaded comparison operator == as a member function

bool AnyList::operator==(const AnyList & list) const
{
	if (count != list.count) return false;
	else {
		Node * objPtr = first;
		Node * refPtr = list.first;
		while (objPtr->getNext() != nullptr) {
			if (objPtr->getData() != refPtr->getData()) return false;
			objPtr = objPtr->getNext();
			refPtr = refPtr->getNext();
		}
	}
	return true;
}
