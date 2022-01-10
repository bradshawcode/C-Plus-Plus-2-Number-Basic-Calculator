#include <iostream>
#include <sstream>  
#include "Header.h"

using namespace std;

int i, num1, num2, result, answer; //sets these varables to ints!
char op; // sets these varables to chars!
bool caloop = true;

int main() { // runs the calculator in a loop!
	cout << "Hello welcome to the calulator applcation!" << endl;
	cout << "Please enter the 2 number below and choic which math sign you would like to use!" << endl;
	blankline();
	while(caloop == true) 
	{
		cout << "Please enter a number: ";
		cin >> num1;
		cout << "Please enter a number: ";
		cin >> num2;
		cout << "Please enter a operator: ";
		cin >> op;
		// checks to see if it is the currect operator for the math!
		// Than it will do the required math!
		if (op == '+') 
		{
			result = num1 + num2;
			cout << "The anwser is: " << result << endl;
			caloop = false;

		}
		else if (op == '-')
		{
			result = num1 - num2;
			cout << result;
			caloop = false;
		}
		else if (op == '/')
		{
			result = (float) result;
			result = num1 / num2;
			cout << result;
			caloop = false;
		}
		else if (op == '*')
		{
			result = num1 * num2;
			cout << result;
			caloop = false;
		}
		else
		{
			caloop = true;
			cout << "invaild Operator!";
		}
	}
	return 0; // stops the main fucntion
}

void blankline() // adds a nice spacing!
{
	cout << "" << endl;
}