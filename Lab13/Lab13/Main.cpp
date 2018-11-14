/*
	(name header)
*/

#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Declaration function checkDelimiters
bool checkDelimiters(const string& str);

int main()
{
	cout << "This program checks for properly matched delimiters." << endl;

	bool done = false;
	
	do
	{
		cout << "\nEnter delimited expression: "	<< endl;

		string inputLine;
		char ch = 'a';
		cin.get(ch);

		while (cin && ch != '\n')
		{
			inputLine += ch;
			cin.get(ch);
		}
		
		if (checkDelimiters(inputLine))
			cout << "Valid" << endl;
		else
			cout << "Invalid" << endl;
	
		cout << "\nCheck another one? (y/n) ";
		char again = 'y';
		cin >> ch;
		if (toupper(ch) == 'N')
			done = true;
		else
		{
			cin.clear(); 
			cin.ignore(INT_MAX, '\n');
		}

	} while (!done);

	cout << endl;
	system("Pause");
	return 0;
}

// Definition function checkDelimiters
bool checkDelimiters(const string& str) {
	stack<char> myStack;
	int left = 0;
	int right = 0;

	for (unsigned int i = 0; i < str.size(); i++) {
		myStack.push(str[i]);
		if (myStack.top() == '(') left++;
		else if (myStack.top() == ')') right++;
	}

	return (right == left);
}