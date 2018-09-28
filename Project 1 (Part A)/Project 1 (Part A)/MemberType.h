#ifndef MEMBERTYPE_H
#define MEMBERTYPE_H

/*
Phan, Thang
Salcedo, Salvador
Nguyen, Tony
Kim, Ji Soo

CS A250
September 29th, 2018

Project 1 Part A
*/

#include <string>
using namespace std;

class MemberType {
public:
	//Constructors
	MemberType();
	MemberType(const string& first, const string& last, int num);

	//Void
	void setMemberInfo(const string& firstN, const string& lastN, int num);
	void printName() const;
	void printMemberInfo() const;

	//Return values
	string getFirstName() const;
	string getLastName() const;
	int getMembershipNo() const;

	~MemberType();
private:
	string fName;
	string lName;
	int num;

};

#endif

