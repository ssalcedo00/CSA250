#include "MemberType.h"
#ifndef MEMBERTYPE_CPP
#define MEMBERTYPE_CPP


MemberType::MemberType()
{
	int memberNum = 0;
}

MemberType::MemberType(const string & first, const string & last, int num)
{
}

void MemberType::printMemberInfo() const
{
}

string MemberType::getFirstName() const
{
	return string();
}

string MemberType::getLastName() const
{
	return string();
}

int MemberType::getMembershipNo() const
{
	return 0;
}

MemberType::~MemberType()
{
}


#endif