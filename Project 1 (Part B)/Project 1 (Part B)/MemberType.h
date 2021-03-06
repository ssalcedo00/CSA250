
#ifndef MEMBERTYPE_H
#define MEMBERTYPE_H

/*
Phan, Thang
Salcedo, Salvador
Nguyen, Tony
Kim, Ji Soo

CS A250
October 6, 2018

Project 1 Part B
*/

#include <string>
using namespace std;

class MemberType
{
public:
	//Constructors
	MemberType();
	MemberType(const string&, const string&, int num);

	//Void
	void setMemberInfo(const string&, const string&, int);
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
#endif // !MEMBERTYPE_H
