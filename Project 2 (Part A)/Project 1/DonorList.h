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

#ifndef DONORLIST_H
#define DONORLIST_H

#include "DonorType.h"

#include <iostream>
#include <string>		

using namespace std;

const int CAP = 20;

class DonorList	
{
public:

	// Declarations public member functions
	DonorList();
	DonorList(int newCapacity);

	void addDonor(const string& firstName, const string& lastName, int memberNum, double amountDonated);

	int getNumberOfDonors() const;

	double getTotalDonations() const;
	double getHighestDonation() const;

	bool isEmpty() const;
	bool searchID(int memberNum) const;
	bool searchName(const string& lastName) const;

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
	void resizeList(); 

	DonorType *list;
	int capacity;
	int numOfElem;
};

#endif