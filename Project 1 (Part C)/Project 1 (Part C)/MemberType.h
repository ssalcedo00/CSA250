/*
	Phan, Thang
	Salcedo, Salvador
	Nguyen, Tony
	Kim, Ji Soo

	CS A250
	October 20, 2018

	Project 1 Part C
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
	MemberType(const string&, const string&, int num);

	void setMemberInfo(const string&, const string&, int);
	
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
