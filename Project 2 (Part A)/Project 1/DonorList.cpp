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
	donors = new list<DonorType>;
}

// Definition copy constructor

DonorList::DonorList(const list<DonorType>& otherDonors)
{
	list<DonorType> donors;
	donors(otherDonors);
}

// Definition of overloaded assignment operator

DonorList& DonorList::operator=(const list<DonorType>& otherDonors)
{
	if (otherList& != this)
	{
		donors(otherDonors);
	}
	else
		cerr << "Attempted assignment to itself." << endl;

	return *this;
}


// Definition member function addDonor

void DonorList::addDonor(const string& firstName, const string& lastName, int memberNum, double amountDonated)
{
	DonorType otherDonor(firstName, lastName, memberNum, amountDonated);

	// checks if it's empty to pushback new DonorType -> donors
	if (donors.empty())
	{
		donors.push_back(otherDonor);
	}
	else
	{
		list<DonorType>::iterator iterDonors = donors.begin();
		size_t originalSize = donors.size();

		// put in membership Number order
		while (iterDonors != donors.end() && donors.size() <= originalSize)
		{
			if (donors.getMembershipNo() < memberNo)
			{
				iterDonors++;
			}
			else
			{
				donors.insert(otherDonor, iterDonors);
			}
		}

	}
}

// Definition member function getNumberOfDonors

int DonorList::getNumberOfDonors() const
{
	return numOfElem;
}

// Definition member function getTotalDonations

double DonorList::getTotalDonations() const
{
	double total = 0.0;

	for (int i = 0; i < numOfElem; i++)
		total += list[i].getAmountDonated();

	return total;
}

// Definition member function getHighestDonation

double DonorList::getHighestDonation() const
{
	double highest = 0.0;

	for (int i = 0; i < numOfElem; i++)
		if (list[i].getAmountDonated() > highest)
			highest = list[i].getAmountDonated();

	return highest;
}

// Definition member function isEmpty

bool DonorList::isEmpty() const
{
	return (numOfElem == 0);
}

// Definition member function searchID

bool DonorList::searchID(int memberNum) const
{
	int i = 0;

	while (i < numOfElem)
	{
		if (list[i].getMembershipNo() == memberNum)
			return true;
		i++;
	}
	return false;
}

// Definition member function deleteDonor

void DonorList::deleteDonor(int memberNum)
{
	if (numOfElem > 1)
	{
		int idx = 0;

		while (idx < numOfElem && list[idx].getMembershipNo() != memberNum)
			idx++;

		for (int i = idx; i < numOfElem - 1; i++)
			list[i] = list[i + 1];
	}
	numOfElem--;
}

// Definition member function emptyList

void DonorList::emptyList()
{
	numOfElem = 0;
}

// Definition member function printAllDonors

void DonorList::printAllDonors() const
{
	for (int i = 0; i < numOfElem; i ++)
		list[i].printDonor();
}

// Definition member function printDonorByName

void DonorList::printDonorByName(const string& lastName) const
{
	bool found = false;

	for (int i = 0; i < numOfElem; ++i)
		if (list[i].getLastName() == lastName)
		{
			list[i].printDonor();
			found = true;
		}

	if (!found)
		cout << "There are no donors with this last name.\n";
}

// Definition member function printDonor

void DonorList::printDonor(int memberNum) const
{
	if (numOfElem > 0)
	{
		bool found = false;
		int i = 0;

		while (i < numOfElem && !found)
		{
			if (memberNum == list[i].getMembershipNo())
			{
				list[i].printDonor();
				found = true;
			}
			i++;
		}
	}
}

// Definition member function printDonation

void DonorList::printDonation(int memberNum) const
{
	if (numOfElem > 0)
	{
		int i = 0;
		bool found = false;

		while (!found && i < numOfElem)
		{
			if (list[i].getMembershipNo() == memberNum)
			{
				list[i].printDonation();
				found = true;
			}
			i++;
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
	delete[] list;
	list = nullptr;
}
