#include "AnyList.h"

int main() {
	AnyList listOne = AnyList();
	AnyList listTwo = AnyList();
	AnyList listTres = AnyList();
	AnyList listQuad = AnyList();

	int a[] = {1, 2, 4, 5, 6};
	int aCap = 5;
	int b[] = {1, 2, 4, 5, 6};
	int bCap = 5;
	int c[] = {1, 2, 4};
	int cCap = 3;
	int d[] = {1, 2, 4, 5, 7};
	int dCap = 5;

	listOne.insertFront(a, aCap);
	listTwo.insertFront(b, bCap);
	listTres.insertFront(c, cCap);
	listQuad.insertFront(d, dCap);

	cout << "ListOne == ListTwo: " << (listOne == listTwo) << endl;
	cout << "ListOne == ListTres: " << (listOne == listTres) << endl;
	cout << "ListOne == ListQuad: " << (listOne == listQuad) << endl;

	cout << listOne;
	cout << listTres;

	system("pause");
	return 0;
}