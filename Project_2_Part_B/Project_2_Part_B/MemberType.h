/*
	Plumbus
	Phan, Thang
	Salcedo, Salvador
	Nguyen, Tony
	Kim, Ji Soo

	CS A250
	December 1, 2018

	Project 2: Donor List
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
	MemberType(const string& fName, const string& lName, int membershipNo);

	void setMemberInfo(const string& fName, const string& lName, int membershipNo);
	
	string getFirstName() const;
	string getLastName() const;
	int getMembershipNo() const;

	void printName() const;
	void printMemberInfo() const;

	~MemberType();

private:
	string fName;
	string lName;
	int num;
};
#endif // !MEMBERTYPE_H