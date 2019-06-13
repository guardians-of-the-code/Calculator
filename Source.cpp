#include <iostream>
#include <vector>
#include "functions.h"
#include <string>
#include <sstream>
using namespace std;



int main()
{
	bool errnum=false;
	bool errchar = false;
	vector<double> nums;// Declare vector
	double temp;
	char operation;
	string str;		
	stringstream ss; // Declare stringstream, like a cin stream but for a string.

	do // Loops for input until error // NEED TO CHECK!
	{
		nums.clear();// empties vector in case of error.
		errnum = false;
		errchar = false;
		cout << "Enter math statement." << endl;
		getline(cin, str);// put line string into str
		ss << str;// put the string into a stream.
		while (!ss.eof())
		{
			ss >> temp;
			if (!ss)
			{
				errnum = true;
				cout << "Error with the number input. Please retry." << endl;
				ss.ignore(100, '\n');
				ss.clear();
				break;// Break out of while loop, stays in do while
			}
			errnum = numcheck(temp);
			if (errnum == true)
			{
				ss.ignore(100, '\n');
				ss.clear();
				break;
			}
			nums.push_back(temp); // Adds number to vector.

			ss >> operation;
			if (!ss.eof())// If its eof, it will pick up error flags hence the if.
			{
				if (!ss)// checking for input error
				{
					errchar = true;
					cout << "Error with operation. Please retry." << endl;
					
					ss.ignore(100, '\n');// Clearing stream
					ss.clear();// Clearing error
					break;
				}

				errchar = charcheck(operation);
				if (errchar == true)
				{
					ss.ignore(100, '\n');// Clearing stream
					ss.clear();//Clearing error
					break;
				}
			}
		}
	}while(errnum==true||errchar==true);
	calc(nums.at(0), nums.at(1), operation);
}
