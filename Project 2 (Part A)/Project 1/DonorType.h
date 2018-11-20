/*
	Plumbus
	Phan, Thang
	Salcedo, Salvador
	Nguyen, Tony
	Kim, Ji Soo

	CS A250
	October 20, 2018

	Project 1: Donor List
*/

#ifndef DONORTYPE_H
#define DONORTYPE_H

#include "MemberType.h"

#include <iostream>
#include <string>

class DonorType : public MemberType
{
public:
	//Constructors
	DonorType();
	DonorType(const string& lName, const string& FName, int newID, double newDAmount);

	//Modifier Functions
	void setDonorInfo(const string& lName, const string& FName, int newID, double newDAmount);
	void setAmountDonated(double newDAmount);

	//Accessor Functions
	double getAmountDonated() const;

	//Print
	void printDonor() const;
	void printDonation() const;

	//Destrutor
	~DonorType();

private:
	double dAmount;
};

#endif // DONORTYPE_H