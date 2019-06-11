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


bool errcheck(int num1, char op)
{
	//May need to add an additional checker for bad data. Not sure though because everything is either integer or character?
	if (num1>1000)
	{
		cout << "Number is too high or low. Please try again."<< endl;
		return true;

	}
	if(op!='+'&&op!='-'&&op!='*'&&op!='/'&&op!='^')
	{
		cout << "Please try again. The operation needs to be valid." << endl;
		return true;
	}
	return false;

}