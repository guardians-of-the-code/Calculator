#include <iostream>
#include <vector>
#include <stdlib.h>
#include "functions.h"
using namespace std;

vector<double> nums;// Declare vector
vector <char> op;
double solved;
int main()
{
	CalcClass calc;
	vector<double> nums;// Declare vector
	vector <char> op;
	char userInput = 'a';

	while (userInput != 'q' && userInput != 'Q')
	{
		calc.getin(nums, op);
		while (nums.size() >= 2)
		{														
			solved=calc.calc(nums.at(0), nums.at(1), op.at(0));// 
			nums.erase(nums.begin());// Deletes first number
			nums.at(0)=solved; //places first number with the solution of both numbers
			op.erase(op.begin());// Deletes first operation character meaning next operation is now first operation
			
		}
		cout << solved << " is the solution." << endl;
		cout << "Press the Enter key to continue, press Q or q to quit..." << endl;
		cin.get(userInput);
		nums.clear();
		op.clear();
		cout << "Press the Enter key to continue, press Q or q to quit..." << endl;
		cin.get(userInput);

	}
}