/*
	(name header)
*/

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <set>
#include <map>
using namespace std;

// Definition of function difference
int difference(set<int> aSet) {
	int smallest, largest;
	
	smallest = *(aSet.cbegin()); //first element of the set, ie: smallest
	largest = *(aSet.rbegin()); //last element of the set, ie: biggest
	
	return (largest - smallest);
}

// Definition of function multiplesOfTen
void multiplesOfTen(map<int, int>& aMap) {
	map<int, int>::iterator iter = aMap.begin();
	int temp = 0;
	while (iter != aMap.cend()) {
		if (iter->first % 10 == 0) {
			temp = iter->first;
		}
		else {
			iter->second = temp;
		}
		iter++;
	}
}

// Definition of function afterFive
void afterFive(const multiset<int>& base, multiset<int>& copy) {
	multiset<int>::reverse_iterator rBase = base.rbegin();

	bool firstFive = false; //allows the function not to include other parts of the multiset with multiple fives

	if(*rBase > 5) {
		while (rBase != base.rend()) {
			if (*rBase == 5 && !firstFive) {
				while (rBase != base.rbegin()) {
					--rBase;
					copy.insert(*rBase);
				}
				firstFive = true;
			}
			else {
				rBase++;
			}
		}
	}
}
#endif
