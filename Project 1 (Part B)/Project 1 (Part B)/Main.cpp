#include "DonorType.h"

int main() {
	DonorType person = DonorType("John", "Doe", 23451355, 5.00);

	person.printDonation();
	
	person.setAmountDonated(5555.983);

	person.printDonation();

	person.setDonorInfo("Tim", "Bool", 12312312, 777.1);

	person.printDonation();
	
	system("pause");
	return 0;
}