#include "DPair.h"



ostream& operator<<(ostream& out, const DPair& otherPair)
{
	return out << "(" << *otherPair.first << ", " << *otherPair.second << ")";
}

DPair::DPair()
{
	//poop
	first = new int;
	second = new int;
	*first = 0;
	*second = 0;
}

DPair::DPair(int a, int b)
{
	first = new int;
	second = new int;
	*first = a;
	*second = b;
}

DPair::DPair(const DPair & otherPair)
{
	first = new int;
	second = new int;
	*first = *otherPair.first;
	*second = *otherPair.second;

}

void DPair::setFirst(int a) const
{
	*first = a;
}

void DPair::setSecond(int b) const
{
	*second = b;
}

DPair& DPair::operator=(const DPair & otherPair)
{
	first = new int;
	second = new int;
	*first = *otherPair.first;
	*second = *otherPair.second;
	return *this;
	
}

DPair::~DPair()
{
	delete first;
	delete second;
	first = nullptr;
	second = nullptr;
}

