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
	calc(num1, num2, operation);
}
