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

#include "DonorType.h"

DonorType::DonorType() : MemberType()
{
	dAmount = 0.0;
}

DonorType::DonorType(const string& donorLName, const string& donorFName,
	int dNum, double donation) : MemberType(donorLName, donorFName, dNum)
{
	dAmount = donation;
}

bool DonorType::operator==(int memberNum) const
{
	return (getMembershipNo() == memberNum);
}

void DonorType::setDonorInfo(const string& donorLName, const string& donorFName,
	int dNum, double donation)
{
	setMemberInfo(donorLName, donorFName, dNum);
	dAmount = donation;
}

void DonorType::setAmountDonated(double donation)
{
	dAmount = donation;
}

double DonorType::getAmountDonated() const
{
	return dAmount;
}

void DonorType::printDonor() const
{
	printMemberInfo();
}

void DonorType::printDonation() const
{
	printName();
	cout << "     " << "Donation amount: $" << getAmountDonated() << endl;
}

DonorType::~DonorType()
{}