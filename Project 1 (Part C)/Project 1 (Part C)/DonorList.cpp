#include "DonorList.h"

// Definition default constructor

DonorList::DonorList()
{
	capacity = 0;
	numOfElem = 0;
	list = new DonorType[capacity];
}

// Definition overloaded constructor

DonorList::DonorList(int newCapacity)
{
	capacity = newCapacity;
}

// Definition member function addDonor

DonorType& DonorList::addDonor(const string& firstName, const string& lastName,
	int memberNum, double amountDonated)
{
	DonorType list;
	list.setDonorInfo(firstName, lastName, memberNum, amountDonated);
	return list;
}

// Definition member function getNumberOfDonors

int DonorList::getNumberOfDonors()
{
	return numOfElem;
}

// Definition member function getTotalDonations

double DonorList::getTotalDonations() const
{
	double total = 0;
	double * list = new double[capacity];
	for (int i = 0; i < numOfElem; i++)
	{
		total += list[i];
	}
	return total;
}

// Definition member function getHighestDonation

double DonorList::getHighestDonations() const
{
	double highest = 0;
	double * list = new double[capacity];

	for (int i = 0; i < numOfElem; i++)
	{
		if (list[i] > highest)
			highest = list[i];
	}

	return highest;
}

// Definition member function isEmpty

bool DonorList::isEmpty()
{
	return (numOfElem == 0);
}

// Definition member function searchID

bool DonorList::searchID(int memberNum)
{
	bool found = false;
	while (found != true)
	{
		
	}
		return found;
}

// Definition member function searchName

bool DonorList::searchName(const string& lastName)
{
	return false;
}

// Definition member function deleteDonor

void DonorList::deleteDonor(int memberNum)
{

}

// Definition member function emptyList

void DonorList::emptyList()
{
	list = nullptr;
	capacity = 0;
	numOfElem = 0;
}

// Definition member function printAllDonors

void DonorList::printAllDonors() const
{

}

// Definition member function printDonorByName

void DonorList::printDonorByName(const string& lastName) const
{

}

// Definition member function printDonor

void DonorList::printDonor(int memberNum) const
{

}

// Definition member function printDonation

void DonorList::printDonation(int memberNum) const
{

}

// Definition member function printTotalDonations

void DonorList::printTotalDonations() const
{

}

// Definition member function printHighestDonation

void DonorList::printHighestDonation() const
{

}

// Definition destructor

DonorList::~DonorList()
{

}

// Definition member function resizeList

void DonorList::resizeList()
{
	
}