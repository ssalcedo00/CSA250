/*
	Kim, JiSoo
	Phan, Thang
	Salcedo, Sal
	Nguyen, Tony

			
	CSA250
*/

#include "DPair.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{
	DPair callingPair(2, 3);
	DPair paramPair(7, 8);

	cout << callingPair << endl;
	cout << paramPair << endl;

	//test copy constructor
	DPair otherPair(paramPair);
	cout << otherPair << endl;
	cout << paramPair << endl;
	//Let's check that there are no shallow copies
	paramPair.setFirst(100);
	paramPair.setSecond(200);
	cout << otherPair << endl;

	//test assignment operator
	otherPair = callingPair;
	//Let's check that there are no shallow copies
	callingPair.setFirst(400);
	callingPair.setSecond(500);
	cout << otherPair << endl;

	//which one will be invoked?
	//copy constructor or assignment operator?
	DPair newPair1(10, 20);
	DPair newPair2 = newPair1;
	//Let's check that there are no shallow copies
	newPair1.setFirst(800);
	newPair1.setSecond(900);

	//newPair1.~DPair();
	
	cout << endl;
	system("Pause");
	return 0;
}