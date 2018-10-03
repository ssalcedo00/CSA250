#ifndef DONORTYPE_H
#define DONORTYPE_H

#include "MemberType.h"
#include <iostream>
#include <iomanip>

class DonorType : public MemberType{
public:
	//Constructors
	DonorType();
	DonorType(const string&, const string&, int, double );

	//Modifier Functions
	void setDonorInfo(const string&, const string&, int, double);
	void setAmountDonated(double);

	//Accessor Functions
	double getAmountDonated() const;

	//Print
	void printDonor();
	void printDonation();

	//Destrutor
	~DonorType();

private:
	double dAmount;
};

#endif // DONORTYPE_H

