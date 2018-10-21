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
	numOfElem = 0;
	list = new DonorType[capacity];
}

// Definition member function addDonor


void DonorList::addDonor(const string& firstName, const string& lastName,
								int memberNum, double amountDonated)
{
	if (numOfElem >= capacity)
		resizeList();

	if (numOfElem > 0)
	{
		int idx = 0;
		while (list[idx].getMembershipNo() < memberNum && idx < numOfElem)
			idx++;

		for (int i = numOfElem; i >idx; i--)
			list[i] = list[i - 1];

		list[idx].setDonorInfo(firstName, lastName, memberNum, amountDonated);
	}
	else
		list[0].setDonorInfo(firstName, lastName, memberNum, amountDonated);
	numOfElem++;
}
	

// Definition member function getNumberOfDonors

int DonorList::getNumberOfDonors()
{
	return numOfElem;
}

// Definition member function getTotalDonations

double DonorList::getTotalDonations() const
{
	double total = 0.0;

	for (int i = 0; i < numOfElem; i++)
	{
		total += list[i].getAmountDonated();
	}
	return total;
}

// Definition member function getHighestDonation

double DonorList::getHighestDonation() const
{
	double highest = list[0].getAmountDonated();

	for (int i = 0; i < numOfElem; i++)
	{
		if (list[i].getAmountDonated() > highest)
			highest = list[i].getAmountDonated();
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
	
	int i = 0;
	while (i < numOfElem)
	{
		if (list[i].getMembershipNo() == memberNum)
		{
			return true;
		}
		i++;
	}
	return false;
}

// Definition member function searchName

bool DonorList::searchName(const string& lastName)
{
	int i = 0;
	while (i < numOfElem)
	{
		if (list[i].getLastName() == lastName)
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
		int i = 0;
		while (i < numOfElem && list[i].getMembershipNo() != memberNum)
			i++;
		for (int j = i; j < numOfElem - 1; j++)
			list[j] = list[j + 1];
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
	if (numOfElem == 1)
	{
		cout << "    ";
		list[0].printDonor();
	}
	else
	{
		int i = 0;
		while (i < numOfElem)
		{
			cout << "    ";
			list[i].printDonor();
			i++;
		}
	}
}

// Definition member function printDonorByName

void DonorList::printDonorByName(const string& lastName) const
{
	bool found = false;
	int i = 0;
	while (found && i < numOfElem)
	{
		if (list[i].getLastName() == lastName)
			found = true;
		i++;
	}
	if (found)
		list[i].printDonor();
	else
		cout << "There are no donors with this last name." << endl;
}

// Definition member function printDonor

void DonorList::printDonor(int memberNum) const
{
	int i = 0;
	bool found = false;
	while (found && i < numOfElem)
	{
		if (list[i].getMembershipNo() == memberNum)
		{
			list[i].printDonor();
			found = true;
		}
		i++;
	}
}

// Definition member function printDonation

void DonorList::printDonation(int memberNum) const
{
	int i = 0;
	bool found = false;
	while (found && i < numOfElem)
	{
		if (list[i].getMembershipNo() == memberNum)
			list[i].printDonation();
		i++;
	}
}

// Definition member function printTotalDonations

void DonorList::printTotalDonations() const
{
	cout << "    Total Donations: $" << getTotalDonations() << endl;
}

// Definition member function printHighestDonation

void DonorList::printHighestDonation() const
{
	cout << "    Highest Donation: $" << getHighestDonation() << endl;
}

// Definition destructor

DonorList::~DonorList()
{
	delete[] list;
	list = nullptr;
	numOfElem = 0;
	capacity = 0;
}

// Definition member function resizeList

void DonorList::resizeList()
{
	capacity *= 2;
	DonorType * newList = new DonorType[capacity];

	for (int i = 0; i < numOfElem - 1; i++)
		newList[i] = list[i];

	delete[] list;
	list = newList;
}