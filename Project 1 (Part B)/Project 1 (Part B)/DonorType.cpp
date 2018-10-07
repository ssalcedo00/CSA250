#include "DonorType.h"

DonorType::DonorType() : MemberType() 
{
	dAmount = 0;
}

DonorType::DonorType(const string & donorLName, const string & donorFName, int dNum, double donation) : MemberType(donorLName, donorFName, dNum) 
{
	dAmount = donation;
}

void DonorType::setDonorInfo(const string & donorLName, const string & donorFName, int dNum, double donation) 
{
	MemberType::setMemberInfo(donorLName, donorFName, dNum);
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
	MemberType::printMemberInfo();
}

void DonorType::printDonation() const 
{
	cout << getLastName() << ", " << getFirstName() << endl;
	cout << "    " << "Donation amount: $" << fixed << setprecision(2) << getAmountDonated() << endl;
}

DonorType::~DonorType() 
{
}
