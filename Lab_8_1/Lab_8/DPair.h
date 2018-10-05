#ifndef DPAIR_H
#define DPAIR_H

#include <iostream>
#include <iomanip>

using namespace std;

class DPair
{
	friend ostream& operator<<(ostream& out, const DPair& otherPair);

public:
	DPair();
	DPair(int a, int b);
	DPair(const DPair& a);

	void setFirst(int a) const;
	void setSecond(int b) const;

	DPair& operator=(const DPair& pObj);
	~DPair();


private:
	int *first, *second;
};

#endif
