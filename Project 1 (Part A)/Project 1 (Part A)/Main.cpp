#include "MemberType.h"
#include <iostream>
using namespace std;

int main() {

	MemberType m1 = MemberType();
	MemberType m2 = MemberType("Bardock", "Obamo", 123456);

	m1.setMemberInfo("Tonald", "Drumph", 666666);

	cout << "First Name: " << m1.getFirstName() << endl;
	cout << "Last Name: " << m1.getLastName() << endl;
	cout << "Mem. No: " << m1.getMembershipNo() << endl;

	m2.printMemberInfo();
	m2.printName();

	system("pause");
	return 0;
}

//dongles are garbage