#include <iostream>
#include <vector>
#include "functions.h"

using namespace std;



int main()
{
	vector<double> nums;// Declare vector
	vector <char> op;
	getin(nums,op);
	calc(nums.at(0), nums.at(1), op.at(0));
}
