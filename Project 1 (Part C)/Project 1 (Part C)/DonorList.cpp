/*
	Plumbus
	Phan, Thang
	Salcedo, Salvador
	Nguyen, Tony
	Kim, Ji Soo

	CS A250
	December 1, 2018

	Project 2: Donor List
*/

#include "DonorList.h"

// Definition default constructor

DonorList::DonorList()
{
	donors = new list<DonorType>;
}

// Definition copy constructor

DonorList::DonorList(const DonorList& otherList)
{
	donors = new list<DonorType>;
	*donors = *(otherList.donors);
}

// Definition of overloaded assignment operator

DonorList& DonorList::operator=(const DonorList& otherDonors)
{
	if (&otherDonors != this)
	{
		*donors = *otherDonors.donors;
	}
	else
		cerr << "Attempted assignment to itself.";

	return *this;
}


// Definition member function addDonor

void DonorList::addDonor(const string& firstName, 
	const string& lastName, int memberNum,
	double amountDonated) const
{
	// checks if it's empty to pushback new DonorType -> donors
	if (donors->empty())
	{
		donors->push_back(DonorType(firstName, lastName, memberNum, amountDonated));
	}
	else
	{
		auto iterDonors = donors->begin();
		auto iterEnd = donors->end();

		// put in membership Number order
		
		while ((iterDonors != iterEnd) && (iterDonors->getMembershipNo() < memberNum))
			iterDonors++;

		if (iterDonors == iterEnd)
			donors->push_back(DonorType(firstName, lastName, memberNum, amountDonated));
		else
			donors->insert(iterDonors,
				DonorType(firstName, lastName, memberNum, amountDonated));
	}
}

// Definition member function getNumberOfDonors

int DonorList::getNumberOfDonors() const
{
	return (donors->size());
}

// Definition member function getTotalDonations

double DonorList::getTotalDonations() const
{
	auto iterDonor = donors->begin();
	auto iterEnd = donors->end();

	double sum = 0.0;

	for (iterDonor; iterDonor != iterEnd; iterDonor++)
	{
		sum += iterDonor->getAmountDonated();
	}

	return sum;
}

// Definition member function getHighestDonation

double DonorList::getHighestDonation() const
{
	auto iterDonor = donors->begin();
	auto iterEnd = donors->end();

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
	return (find(donors->begin(), donors->end(), memberNum) != donors->end());
}

// Definition member function deleteDonor

void DonorList::deleteDonor(int memberNum) const
{
	auto iter = find(donors->cbegin(), donors->cend(), memberNum);
	donors->erase(iter);
}

// Definition member function emptyList

void DonorList::emptyList() const
{
	donors->clear();
}

// Definition member function printAllDonors

void DonorList::printAllDonors() const
{
	auto iterDonor = donors->begin();
	auto iterEnd = donors->end();

	for (iterDonor; iterDonor != iterEnd; iterDonor++)
		iterDonor->printDonor();
}

// Definition member function printDonorByName

void DonorList::printDonorByName(const string& lastName) const
{
	bool found = false;

	auto iterDonor = donors->begin();
	auto iterEnd = donors->end();

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
		auto iter = find(donors->begin(), donors->end(), memberNum);
		iter->printDonor();
	}
}

// Definition member function printDonation

void DonorList::printDonation(int memberNum) const
{
	if (donors->size() > 0)
	{
		auto iter = find(donors->begin(), donors->end(), memberNum);
		iter->printDonation();
	}
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
