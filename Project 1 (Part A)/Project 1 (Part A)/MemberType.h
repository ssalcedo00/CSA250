/*
Phan, Thang
Salcedo, Salvador
Nguyen, Tony
Kim, Ji Soo

CS A250
September 29th, 2018

Project 1 Part A
*/

#ifndef MEMBERTYPE_H
#define MEMBERTYPE_H

#include <string>
#include <iostream>

using namespace std;

class MemberType
{
public:
	MemberType();
	MemberType(const string& newFirstName,
		const string& newLastName, int newMemberNum);

	void setMemberInfo(const string& newFirstName,
		const string& newLastname, int newMemberNum);

	string getFirstName() const;
	string getLastName() const;
	int getMembershipNo() const;

	void printName() const;
	void printMemberInfo() const;

	~MemberType();

private:
	string firstName;
	string lastName;
	int memberNum;
};

#endif 