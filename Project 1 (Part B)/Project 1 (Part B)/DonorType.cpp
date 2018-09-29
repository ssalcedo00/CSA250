#include "DonorType.h"

DonorType::DonorType()
{
}

DonorType::DonorType(const string &, const string &, int, double)
{
}

void DonorType::setDonorInfo(const string & newFName, const string & newLName, int newNum, double newAmount) {
	
	dAmount = newAmount;
}

void DonorType::setAmountDonated(double newAmount) {
	dAmount = newAmount;
}

double DonorType::getAmountDonated() const
{
	return 0.0;
}

void DonorType::printDonor()
{
}

void DonorType::printDonation()
{
}

DonorType::~DonorType()
{
}
