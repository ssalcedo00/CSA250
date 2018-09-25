#ifndef MEMBERTYPE_H
#define MEMBERTYPE_H

#include <string>
#include <iostream>

class MemberType {
public:
	//Constructors
	MemberType();
	MemberType(const string& first, const string& last, int num);

	//Void
	void setMemberInfo();
	void printName() const;
	void printMemberInfo() const;

	//Return values
	string getFirstName() const;
	string getLastName() const;
	int getMembershipNo() const;


	~MemberType();
private:
	string firstName;
	string lastName;
	int memberNum;

};

#endif // !1

