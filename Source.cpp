#include <iostream>
#include <vector>
#include <stdlib.h>
#include "functions.h"
using namespace std;
int main()
{
	CalcClass calc;
	vector<double> nums;// Declare vector
	vector <char> op;
	char userInput = 'a';

	while (userInput != 'q' && userInput != 'Q')
	{
		calc.getin(nums, op);
		calc.calc(nums.at(0), nums.at(1), op.at(0));
		nums.clear();
		op.clear();
		cout << "Press the Enter key to continue, press Q or q to quit..." << endl;
		cin.get(userInput);

	}
}