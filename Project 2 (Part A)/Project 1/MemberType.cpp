/*
	Plumbus
	Phan, Thang
	Salcedo, Salvador
	Nguyen, Tony
	Kim, Ji Soo

	CS A250
	October 20, 2018

	Project 1: Donor List
*/

#include "MemberType.h"

MemberType::MemberType()
{
	num = 0;
}

MemberType::MemberType(const string& firstN, const string& lastN, int no)
{
	fName = firstN;
	lName = lastN;
	num = no;
}

void MemberType::setMemberInfo(const string& firstN, const string& lastN, int no)
{
	fName = firstN;
	lName = lastN;
	num = no;
}

string MemberType::getFirstName() const
{
	return fName;
}

string MemberType::getLastName() const
{
	return lName;
}

int MemberType::getMembershipNo() const
{
	return num;
}

void MemberType::printName() const
{
	cout << "     " << lName << ", " << fName << endl;
}

void MemberType::printMemberInfo() const
{
	cout << "     " << num << " - " << fName << " " << lName << endl;
}

MemberType::~MemberType()
{}