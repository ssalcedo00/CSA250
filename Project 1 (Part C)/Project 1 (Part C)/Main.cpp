/*
	(name header)
*/

#include "DonorList.h"
#include "InputHandler.h"

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void displayMenu();
void processSelection(DonorList& donorList);

const string FILE_NAME = "donors_data.txt";

int main()
{
	DonorList donorList;

	readDonorData(donorList);
	displayMenu();
	processSelection(donorList);

	cout << endl;
	system("Pause");
	return 0;
}

void displayMenu()
{
	cout << "\n*** MAIN MENU ***\n";
	cout << "\nSelect one of the following:\n\n";
	cout << "    1. Add a donor" << endl;
	cout << "    2. Delete a donor" << endl;
	cout << "    3. Find a donor by last name" << endl;
	cout << "    4. Find a donor by membership number" << endl;
	cout << "    5. Print all donors" << endl;
	cout << "    6. Print a donor's donation" << endl;
	cout << "    7. Print total donations" << endl;
	cout << "    8. Print highest donation" << endl;
	cout << "    9: To exit" << endl;
}

void processSelection(DonorList& donorList)
{
	cout << "\nEnter your selection: ";
	int selection = 0;
	cin >> selection;
	cout << endl;

	while (selection != 9)
	{
		string fName, lName;
		int memberNo = 0;
		double donation = 0.0;

		cout << fixed << showpoint << setprecision(1);

		switch (selection)
		{
			// Add a donor
		case 1:
			cout << "  => Enter donor's first name: ";
			cin >> fName;
			fName.at(0) = toupper(fName.at(0));
			cout << "  => Enter donor's last name: ";
			cin >> lName;
			lName.at(0) = toupper(lName.at(0));
			cout << "  => Enter donor's membership number: ";
			cin >> memberNo;
			cout << "  => Enter amount donated: $ ";
			cin >> donation;
			cout << endl;
			/*
			We are using search here because the addDonor function
			simply adds a donor at the end of the list without
			checking if the donor is already in the list.
			*/
			if (donorList.searchID(memberNo))
				cerr << "  => This donor is already in the list." << endl;
			else
			{
				donorList.addDonor(fName, lName, memberNo, donation);
				cout << "  => Donor has been added." << endl;
			}
			break;

			// Delete a donor
		case 2:
			if (donorList.isEmpty())
				cerr << "  => There are no donors in the list." << endl;
			else
			{
				cout << "  => Enter donor's membership number: ";
				cin >> memberNo;
				cout << endl;
				if (!donorList.searchID(memberNo))
					cerr << "  => This donor is not in the list." << endl;
				else
				{
					donorList.deleteDonor(memberNo);
					cout << "  => Donor has been deleted." << endl;
				}
			}
			break;

			// Find a donor by name
		case 3:
			if (donorList.isEmpty())
				cerr << "  => There are no donors in the list." << endl;
			else
			{
				cout << "  => Enter donor's last name: ";
				cin >> lName;
				lName.at(0) = toupper(lName.at(0));
				cout << endl;
				if (!donorList.searchName(lName))
					cout << "  => There are no donors with this last name.\n";
				else
					donorList.printDonorByName(lName);
			}
			break;

			// Find a donor by membership number
		case 4:
			if (donorList.isEmpty())
				cerr << "  => There are no donors in the list." << endl;
			else
			{
				cout << "  => Enter donor's membership number: ";
				cin >> memberNo;
				cout << endl;
				if (!donorList.searchID(memberNo))
					cout << "  => Donor not found.\n";
				else
					donorList.printDonor(memberNo);
			}
			break;

			// Print all donors
		case 5:
			if (donorList.isEmpty())
				cerr << "  => There are no donors in the list." << endl;
			else
				donorList.printAllDonors();
			break;

			// Print a donor's donation
		case 6:
			if (donorList.isEmpty())
				cerr << "  => There are no donors in the list." << endl;
			else
			{
				cout << "  => Enter donor's membership number: ";
				cin >> memberNo;
				cout << endl;
				if (!donorList.searchID(memberNo))
					cout << "  => Donor not found.\n";
				else
					donorList.printDonation(memberNo);
			}
			break;

			// Print total donations
		case 7:
			if (donorList.isEmpty())
				cerr << "  => There are no donors in the list." << endl;
			else
				donorList.printTotalDonations();
			break;

			// Print highest donation and donor's information
		case 8:
			if (donorList.isEmpty())
				cerr << "  => There are no donors in the list." << endl;
			else
				donorList.printHighestDonation();
			break;

		default:
			cout << "  => Sorry. That is not a selection." << endl;
			break;
		}

		cout << endl;
		system("Pause");
		displayMenu();
		cout << "\n  => Enter your selection: ";
		cin >> selection;
		cout << endl;
	}

	if (selection == 9)
		cout << "  => Thank you for visiting our site!" << endl;
}
