#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
/*class CalcClass
{
public:

TODO FOR OBJECT ORIENTED
getin(nums,op);
calc(nums.at(0), nums.at(1), op.at(0));
private:
vector<double> nums;// Declare vector
vector <char> op;

};
*/
void calc(float num1, float num2, char operation)
{
	if (operation == '+')
	{
		cout << num1 + num2 << endl;
	}
	else if (operation == '-')
	{
		cout << num1 - num2 << endl;
	}
	else if (operation == '*')
	{
		cout << num1 * num2 << endl;
	}
	else if (operation == '/')
	{
		cout << num1 / num2 << endl;
	}
}


bool numcheck(int num1)
{
	//May need to add an additional checker for bad data. Not sure though because everything is either integer or character?
	if (num1>10000||num1<-10000)
	{
		cout << "Number is too high or low. Please try again."<< endl;
		return true;

	}

	return false;

}
bool charcheck(char op)
{

	if (op != '+'&&op != '-'&&op != '*'&&op != '/'&&op != '^'&&op != '='&&op != '('&&op != ')')
	{
		cout << "Please try again. The operation needs to be valid." << endl;
		return true;
	}
	return false;

}
void getin(vector <double> &nums,vector <char>& operation)
{
	bool errnum = false;
	bool errchar = false;
	
	double temp;
	char chartemp;
	string str;
	stringstream ss; // Declare stringstream, like a cin stream but for a string.

	do // Loops for input until error
	{
		nums.clear();// empties vector in case of error.
		errnum = false;
		errchar = false;
		cout << "Enter math statement." << endl;
		getline(cin, str);// put line string into str
		ss << str;// put the string into a stream.
		while (!ss.eof()) //Loop until eof.
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

			ss >>chartemp ;
			
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

				errchar = charcheck(chartemp);
				if (errchar == true)
				{
					ss.ignore(100, '\n');// Clearing stream
					ss.clear();//Clearing error
					break;
				}
				operation.push_back(chartemp);// Dont need else because if has a break in it
			}
		}
	} while (errnum == true || errchar == true);
}