#include <iostream>
using namespace std;
void calc(float num1, float num2, char operation)
{
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
}