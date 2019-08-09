#include <iostream>
#include <vector>
#include <stdlib.h>
#include <string>
#include "functions.h"
using namespace std;

int main()
{
	eq str;
	double solved;
	CalcClass calc;
	bool success=false;
	string userInput = "a";
	cout << "Please enter a mathematical equation or enter Q to quit." << endl;
	getline(cin, userInput);



	while (userInput != "q" && userInput != "Q")
	{
		success = calc.getin(userInput, str);//ERROR CHECK
		if (success)
		{
			cout << "Success" << endl;
			solved = calc.solving(userInput);
			cout << "Success" << endl;
			cout << solved << " is the solution." << endl;
		}
		cout << "Press enter a mathematical equation or press Q or q to quit..." << endl;
		getline(cin, userInput);

		
	}
}