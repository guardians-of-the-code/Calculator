#include <iostream>
#include <cmath>
using namespace std;

void RaisedToPower(double& num1, double& num2) {
	double newNum = 1;
	for(int i = 0; i < num2; ++i){
		newNum *= num1;
	}

	cout << newNum << endl;
}