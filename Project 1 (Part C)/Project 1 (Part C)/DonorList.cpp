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

#include "DonorList.h"

// Definition default constructor

DonorList::DonorList()
{
	list<DonorType*> donors;
}

// Definition copy constructor

DonorList::DonorList(list<DonorType>* otherDonors)
{
	list<DonorType>* donors(otherDonors);
}

// Definition of overloaded assignment operator

DonorList& DonorList::operator=(list<DonorType>* otherDonors)
{
	list<DonorType>* donors(otherDonors);
	return *this;
}


// Definition member function addDonor

void DonorList::addDonor(const string& firstName, const string& lastName, int memberNum, double amountDonated)
{
	DonorType otherDonor(firstName, lastName, memberNum, amountDonated);

	// checks if it's empty to pushback new DonorType -> donors
	if (donors->empty())
	{
		donors->push_back(otherDonor);
	}
	else
	{
		list<DonorType>::iterator iterDonors = donors->begin();
		size_t originalSize = donors->size();

		// put in membership Number order
		while (iterDonors != donors->end() && donors->size() <= originalSize)
		{
			if (otherDonor.getMembershipNo() < memberNum)
			{
				iterDonors++;
			}
			else
			{
				donors->insert(iterDonors, otherDonor); // (position, value)
			}
		}

	}
}

// Definition member function getNumberOfDonors

int DonorList::getNumberOfDonors() const
{
	return donors->size();
}

// Definition member function getTotalDonations

double DonorList::getTotalDonations() const
{
	list<DonorType>::iterator iterDonor = donors->begin();
	list<DonorType>::iterator iterEnd = donors->end();

	double sum = 0;

	for (iterDonor; iterDonor != iterEnd; iterDonor++)
	{
		sum += iterDonor->getAmountDonated();
	}

	return sum;
}

// Definition member function getHighestDonation

double DonorList::getHighestDonation() const
{
	list<DonorType>::iterator iterDonor = donors->begin();
	list<DonorType>::iterator iterEnd = donors->end();

	double highest = 0.0;

	for (iterDonor; iterDonor != iterEnd; iterDonor++)
		if (iterDonor->getAmountDonated() > highest)
			highest = iterDonor->getAmountDonated();

	return highest;
}

// Definition member function isEmpty

bool DonorList::isEmpty() const
{
	return donors->empty();
}

// Definition member function searchID

bool DonorList::searchID(int memberNum) const
{
	int i = 0;

	list<DonorType>::iterator iterDonor = donors->begin();
	list<DonorType>::iterator iterEnd = donors->end();

	while (iterDonor != iterEnd)
	{
		if (iterDonor->getMembershipNo() == memberNum)
			return true;
		iterDonor++;
	}

	return false;
}

// Definition member function deleteDonor

void DonorList::deleteDonor(int memberNum)
{
	donors->erase(donors->begin(), donors->end());
}

// Definition member function emptyList

void DonorList::emptyList()
{
	donors->clear();
}

// Definition member function printAllDonors

void DonorList::printAllDonors() const
{
	list<DonorType>::iterator iterDonor = donors->begin();
	list<DonorType>::iterator iterEnd = donors->end();

	for (iterDonor; iterDonor != iterEnd; iterDonor++)
		iterDonor->printDonor();
}

// Definition member function printDonorByName

void DonorList::printDonorByName(const string& lastName) const
{
	bool found = false;

	list<DonorType>::iterator iterDonor = donors->begin();
	list<DonorType>::iterator iterEnd = donors->end();

	for (iterDonor; iterDonor!= iterEnd; iterDonor++)
		if (iterDonor->getLastName() == lastName)
		{
			iterDonor->printDonor();
			found = true;
		}

	if (!found)
		cout << "There are no donors with this last name.\n";
}

// Definition member function printDonor

void DonorList::printDonor(int memberNum) const
{
	if (donors->size() > 0)
	{
		bool found = false;
		
		list<DonorType>::iterator iterDonors = donors->begin();
		list<DonorType>::iterator iterEnd = donors->end();

		while (iterDonors != iterEnd && !found)
		{
			if (memberNum == iterDonors->getMembershipNo())
			{
				iterDonors->printDonor();
				found = true;
			}
			iterDonors++;
			
		}
	}
}

// Definition member function printDonation

void DonorList::printDonation(int memberNum) const
{
	if (donors->size() > 0)
	{
		bool found = false;

		list<DonorType>::iterator iterDonors = donors->begin();
		list<DonorType>::iterator iterEnd = donors->end();

		while (!found && iterDonors != iterEnd)
		{
			if (iterDonors->getMembershipNo() == memberNum)
			{
				iterDonors->printDonation();
				found = true;
			}
			iterDonors++;
		}
	}
	cout << endl;
}

// Definition member function printTotalDonations

void DonorList::printTotalDonations() const
{
	cout << "     Total donations: $" << getTotalDonations() << endl;
}
// Definition member function printHighestDonation

void DonorList::printHighestDonation() const
{
	cout << "     Highest donations: $" << getHighestDonation() << endl;
}

// Definition destructor

DonorList::~DonorList()
{
	donors->~list();
}
