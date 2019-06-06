#include <iostream>
#include "functions.h"
using namespace std;

int main()
{
	double num1, num2;
	char operation;
	cout << "Enter math statement." << endl;
	cin >> num1;
	cin >> operation;
	cin >> num2;

	if (operation == '+')
		{
			cout << num1 + num2 << endl;
		}
		else if (operation == '-')
		{
			cout << num1 - num2 << endl;
		}
		else if (operation == '*')
		{
			cout << num1 * num2 << endl;
		}
		else if (operation == '/')
		{
			cout << num1 / num2 << endl;
		}
		else if (operation == '^')
		{
			RaisedToPower(num1, num2);
		}
		
		return 0;

}

