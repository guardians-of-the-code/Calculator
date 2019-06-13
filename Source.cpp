#include <iostream>
#include <vector>
#include <stdlib.h>
#include "functions.h"

using namespace std;



int main()
{
	vector<double> nums;// Declare vector
	vector <char> op;
	char userInput;

	while (userInput != 'q' && userInput != 'Q')
	{
		getin(nums,op);
		calc(nums.at(0), nums.at(1), op.at(0));

		cout << "Press the Enter key to continue, press Q or q to quit..." << endl;
		cin.get(userInput);
	}
	
}
