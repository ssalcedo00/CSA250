#include "DonorType.h"

int main() {
	DonorType person = DonorType();
	DonorType man = DonorType("its", "ya boi", 83284239, 235.62);

	man.printDonor();
	person.printDonor();

	system("pause");
	return 0;
}