#ifndef DONORTYPE_H
#define DONORTYPE_H

#include "MemberType.h"

class DonorType {
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

