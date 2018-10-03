#include "AnyList.h"

#include <iostream>
using namespace std;

int main()
{
	int a1[] = { 1, 2, 3, 4 };
	int a2[] = { 1, 6, 7, 8 };
	int a3[] = { 6, 7, 8, 1 };
	int a4[] = { 6, 8, 7, 9 };
	int a5[] = { 1, 2, 3 };
	int a6[] = { 6, 8, 7, 9 };

	AnyList list1, list2, list3, list4, list5, list6;

	list1.insertFront(a1, 4);
	list2.insertFront(a2, 4);
	list3.insertFront(a3, 4);
	list4.insertFront(a4, 4);
	list5.insertFront(a5, 3);
	list6.insertFront(a6, 4);

	cout << "TEST: Ostream operator <<\n\n";
	cout << "\tList1 is: " << list1 << endl;
	cout << "\tList2 is: " << list2 << endl;
	cout << "\tList3 is: " << list3 << endl;
	cout << "\tList4 is: " << list4 << endl;
	cout << "\tList5 is: " << list5 << endl;
	cout << "\tList6 is: " << list6 << endl;

	cout << "\n\nTEST: Comparison operator ==\n\n";
	if (list1 == list2)	cout << "\tList1 == List2" << endl;
	else cout << "\tList1 != List2" << endl;
	if (list1 == list3)	cout << "\tList1 == List3" << endl;
	else cout << "\tList1 != List3" << endl;
	if (list1 == list4)	cout << "\tList1 == List4" << endl;
	else cout << "\tList1 != List4" << endl;
	if (list1 == list5)	cout << "\tList1 == List5" << endl;
	else cout << "\tList1 != List5" << endl;
	if (list3 == list3)	cout << "\tList3 == List3" << endl;
	else cout << "\tList3 != List3" << endl;
	if (list4 == list6)	cout << "\tList4 == List6" << endl;
	else cout << "\tList4 != List6" << endl;

	cout << endl;
	system("Pause");
	return 0;
}
