#include <iostream>
#include <vector>
#include <stdlib.h>
#include "functions.h"

using namespace std;

vector<double> nums;// Declare vector
vector <char> op;

int main()
{	
	CalcClass calc;
	char userInput='a';

	while (userInput != 'q' && userInput != 'Q')
	{
		
		calc.getin(nums, op);
		calc.calc(nums.at(0), nums.at(1), op.at(0));

		cout << "Press the Enter key to continue, press Q or q to quit..." << endl;
		cin.get(userInput);
		nums.clear();
		op.clear();
	}

<<<<<<< HEAD
}
=======
}
>>>>>>> 038d9793c524b98a33d934a912df333b2c0f9e16
