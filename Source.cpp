#include <iostream>
#include <vector>
#include <stdlib.h>
#include <string>
#include "functions.h"
using namespace std;

int main()
{
	double solved;
	CalcClass calc;
	bool success;
	string userInput = "a";
	cout << "Please enter a mathematical equation or enter Q to quit." << endl;
	getline(cin, userInput);
	while (userInput != "q" && userInput != "Q")
	{
		success= calc.getin(calc.nums, calc.op, userInput);
		if (success)
		{
			solved = calc.solving(calc);
			cout << solved << " is the solution." << endl;
		}
		cout << "Press enter a mathematical equation or press Q or q to quit..." << endl;
		getline(cin, userInput);
		calc.nums.clear();
		calc.op.clear();
		
	}
}