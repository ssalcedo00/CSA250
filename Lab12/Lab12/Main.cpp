#include "Functions.h"

#include <iostream>
#include <set>
#include <map>
#include <iterator>
using namespace std;

void printMap(const map<int, int>& aMap);

int main() 
{
	cout << "TEST: difference ================================\n\n";

	set<int> s1{ 10, 3, 5, 6 },
		s2{ 7, 2, 10, 9 },
		s3{ 2, 10, 7, 2 },
		s4{ 2, 10 },
		s5{ 10, 2 },
		s6{ 2, 3 },
		s7{ 2, 2 },
		s8{ 2 },
		s9{ 5, 1, 6, 1, 9, 9 },
		s10{ 7, 6, 8, 5 },
		s11{ 7, 7, 6, 8, 5, 5, 6 },
		s12{ 10, 0 };

	cout << "      Expected: 7 \n=> Your output: " << difference(s1) << endl;
	cout << "\n      Expected: 8 \n=> Your output: " << difference(s2) << endl;
	cout << "\n      Expected: 8 \n=> Your output: " << difference(s3) << endl;
	cout << "\n      Expected: 8 \n=> Your output: " << difference(s4) << endl;
	cout << "\n      Expected: 8 \n=> Your output: " << difference(s5) << endl;
	cout << "\n      Expected: 1 \n=> Your output: " << difference(s6) << endl;
	cout << "\n      Expected: 0 \n=> Your output: " << difference(s7) << endl;
	cout << "\n      Expected: 0 \n=> Your output: " << difference(s8) << endl;
	cout << "\n      Expected: 8 \n=> Your output: " << difference(s9) << endl;
	cout << "\n      Expected: 3 \n=> Your output: " << difference(s10) << endl;
	cout << "\n      Expected: 3 \n=> Your output: " << difference(s11) << endl;
	cout << "\n      Expected: 10 \n=> Your output: " << difference(s12) << endl;
	

	
	cout << "\n\nTEST: multiplesOfTen ================================\n\n";

	map<int, int> m1{ { 10, 0 }, {12, 0}, {14, 0}, {20, 0}, {22, 0 }, {30, 0} },
		m2{ { 3, 0 },{ 6, 0 },{ 10, 0 },{ 20, 0 },{ 30, 0 },{ 32, 0 } },
		m3{ { 10, 0 },{ 20, 0 },{ 40, 0 } },
		m4{ { 2, 0 },{ 4, 0 },{ 14, 0 },{ 48, 0 },{ 79, 0 } },
		m5{ { 90, 0 } },
		m6{ { 40, 0 },{ 42, 0 },{ 45, 0 },{ 84, 0 },{ 87, 0 },{ 91, 0 } },
		m7{ { 30, 0 },{ 42, 0 },{ 45, 0 },{ 50, 0 },{ 87, 0 },{ 91, 0 } };

	cout << "   Expected: {10,0},{12,10},{14,10},{20,0},{22,20},{30,0}"
		<< "\nYour output: ";
	multiplesOfTen(m1);
	printMap(m1);

	cout << "\n   Expected: {3,0},{6,0},{10,0},{20,0},{30,0},{32,30}"
		<< "\nYour output: ";
	multiplesOfTen(m2);
	printMap(m2);

	cout << "\n   Expected: {10,0},{20,0},{40,0}"
		<< "\nYour output: ";
	multiplesOfTen(m3);
	printMap(m3);

	cout << "\n   Expected: {2,0},{4,0},{14,0},{48,0},{79,0}"
		<< "\nYour output: ";
	multiplesOfTen(m4);
	printMap(m4);

	cout << "\n   Expected: {90,0}"
		<< "\nYour output: ";
	multiplesOfTen(m5);
	printMap(m5);

	cout << "\n   Expected: {40,0},{42,40},{45,40},{84,40},{87,40},{91,40}"
		<< "\nYour output: ";
	multiplesOfTen(m6);
	printMap(m6);

	cout << "\n   Expected: {30,0},{42,30},{45,30},{50,0},{87,50},{91,50}"
		<< "\nYour output: ";
	multiplesOfTen(m7);
	printMap(m7);

	
	cout << "\n\nTEST: afterFive ================================\n\n";

	multiset<int> ms1{ 1, 2, 3, 5, 6 },
		ms2{ 5, 5, 5, 6, 7, 9 },
		ms3{ 1, 3, 5, 5, 5, 5, 5, 5, 8, 8 },
		ms4{ 1, 3, 3, 4, 5 },
		ms5{ 3, 6, 8, 10, 23, 54, 54, 67 },
		ms6{ 3, 4, 5, 7, 8, 9, 45, 56, 56, 67, 78, 92 };

	multiset<int> ms10, ms20, ms30, ms40, ms50, ms60;

	ostream_iterator<int> printout(cout, " ");

	cout << "      Expected: 6\n=> Your output: ";
	afterFive(ms1, ms10);
	copy(ms10.begin(), ms10.end(), printout);

	cout << "\n\n      Expected: 6 7 9\n=> Your output: ";
	afterFive(ms2, ms20);
	copy(ms20.begin(), ms20.end(), printout);

	cout << "\n\n      Expected: 8 8\n=> Your output: ";
	afterFive(ms3, ms30);
	copy(ms30.begin(), ms30.end(), printout);

	
	cout << "\n\n      Expected: (empty - there should be no output)\n=> Your output: ";
	afterFive(ms4, ms40);
	copy(ms40.begin(), ms40.end(), printout);

	
	cout << "\n\n      Expected: (empty - there should be no output)\n=> Your output: ";
	afterFive(ms5, ms50);
	copy(ms50.begin(), ms50.end(), printout);
	

	cout << "\n\n      Expected: 7 8 9 45 56 56 67 78 92\n=> Your output: ";
	afterFive(ms6, ms60);
	copy(ms60.begin(), ms60.end(), printout);

	cout << endl << endl;


	cout << endl;
	system("pause");
	return 0;
}



void printMap(const map<int, int>& aMap)
{
	map<int, int>::const_iterator iterMap = aMap.cbegin();
	map<int, int>::const_iterator iterMapEnd = aMap.cend();
	for (iterMap; iterMap != iterMapEnd; ++iterMap)
		cout << "{" << iterMap->first << "," << iterMap->second << "} ";
	cout << endl;
}