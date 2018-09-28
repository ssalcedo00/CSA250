#include "MemberType.cpp"
using namespace std;

int main() {

	MemberType m1 = MemberType();
	MemberType m2 = MemberType("Bardock", "Obamo", 123456);

	m2.printMemberInfo();
	m2.printName();

	return 0;
}