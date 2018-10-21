#ifndef DONORLIST_H
#define DONORLIST_H

#include "DonorType.h"

#include<iostream>
#include <string>		
#include <iomanip>

using namespace std;

const int CAP = 20;

class DonorList	
{
public:

	// Declarations public member functions
	DonorList();
	DonorList(int newCapacity);

	void addDonor(const string& firstName, const string& lastName, int memberNum, double amountDonated);

	int getNumberOfDonors();

	double getTotalDonations() const;
	double getHighestDonation() const;

	bool isEmpty();
	bool searchID(int memberNum);
	bool searchName(const string& lastName);

	void deleteDonor(int memberNum);
	void emptyList();

	void printAllDonors() const;
	void printDonorByName(const string& lastName) const;
	void printDonor(int memberNum) const;
	void printDonation(int memberNum) const;
	void printTotalDonations() const;
	void printHighestDonation() const;

	~DonorList();

private:

	// Declaration private member function
	void resizeList(); // not const because capacity is changing

	DonorType *list;
	int capacity;
	int numOfElem;
};

#endif

