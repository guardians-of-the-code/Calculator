#include <iostream>
#include <vector>
#include <stdlib.h>
#include "functions.h"
using namespace std;

int main()
{
	double solved;
	CalcClass calc;

	char userInput = 'a';
	while (userInput != 'q' && userInput != 'Q')
	{
		calc.getin(calc.nums, calc.op);
		while (calc.nums.size() >= 2)
		{														
			solved=calc.calc(calc.nums.at(0),calc.nums.at(1),calc.op.at(0));// 
			calc.nums.erase(calc.nums.begin());// Deletes first number
			calc.nums.at(0)=solved; //places first number with the solution of both numbers
			calc.op.erase(calc.op.begin());// Deletes first operation character meaning next operation is now first operation
		}
		cout << solved << " is the solution." << endl;
		cout << "Press the Enter key to continue, press Q or q to quit..." << endl;
		cin.get(userInput);
		calc.nums.clear();
		calc.op.clear();
	}
}