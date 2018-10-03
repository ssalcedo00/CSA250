/*
Phan, Thang
Salcedo, Salvador
Nguyen, Tony
Kim, Ji Soo

CS A250
September 29th, 2018

Project 1 Part A
*/

#include "MemberType.h"

MemberType::MemberType()
{
	memberNum = 0;
}

MemberType::MemberType(const string& newFirstName,
	const string& newLastName, int newMemberNum)
{
	firstName = newFirstName;
	lastName = newLastName;
	memberNum = newMemberNum;
}

void MemberType::setMemberInfo(const string& newFirstName,
	const string& newLastName, int newMemberNum)
{
	firstName = newFirstName;
	lastName = newLastName;
	memberNum = newMemberNum;
}

string MemberType::getFirstName() const
{
	return firstName;
}

string MemberType::getLastName() const
{
	return lastName;
}

int MemberType::getMembershipNo() const
{
	return memberNum;
}

void MemberType::printName() const
{
	cout << firstName << ", " << lastName << endl;
}

void MemberType::printMemberInfo() const
{
	cout << memberNum << " - " << firstName << " " << lastName << endl;
} 

MemberType::~MemberType()
{}