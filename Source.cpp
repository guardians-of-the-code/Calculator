#include <iostream>
#include "functions.h"
using namespace std;
bool errcheck(int,char);


int main()
{
	bool error=false;
	double num1, num2;
	char operation;
	do // Loops for input until error // NEED TO CHECK!
	{
		error=false;
		cout << "Enter math statement." << endl;
		while(cin>>num1||!cin) // continues to get number and operations until end of stream
		{
			cin >> operation;
			error=errcheck(num1,operation);
		}
	}while(error);
	calc(num1, num2, operation);
}
