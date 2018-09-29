#include "DonorType.h"


DonorType::DonorType() {
	MemberType();
	dAmount = 0;
}

DonorType::DonorType(const string & newFName, const string &newLName, int newNum, double newAmount) {
	//uses constructor, MemberType from parent header
	MemberType(newFName, newLName, newAmount);
	setAmountDonated(newAmount);
}

void DonorType::setDonorInfo(const string & newFName, const string & newLName, int newNum, double newAmount) {
	//uses memberfunction, setMemberInfo from parent header
	void setMemberInfo(const string& newFName, const string& newLName, int newNum);
	setAmountDonated(newAmount);
}

void DonorType::setAmountDonated(double newAmount) {
	dAmount = newAmount;
}

double DonorType::getAmountDonated() const {
	return dAmount;
}

void DonorType::printDonor() {
}

void DonorType::printDonation() {

}

DonorType::~DonorType() {
}
