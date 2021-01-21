/*-~-~-~-~-~-~-~-~-~-~-~-~-~-~-
   Intro to Programming Lab 1
~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~*/

#include <iostream>
#include <string>
using namespace std; 

// Main Entry Function

int main()
{

	cout << "Sizes of different Data Types\nsmallest to largest!\n\n";

	cout << "Size of char: " << sizeof(char) << " bytes" << endl;
	cout << "Size of bool: " << sizeof(bool) << " bytes" << endl;
	cout << "Size of short: " << sizeof(short) << " bytes" << endl;
	cout << "Size of int: " << sizeof(int) << " bytes" << endl;
	cout << "Size of float: " << sizeof(float) << " bytes" << endl;
	cout << "Size of double: " << sizeof(float) << " bytes" << endl;
	cout << "Size of long: " << sizeof(long) << " bytes" << endl;
	cout << "Size of long long: " << sizeof(long long int) << " bytes" << endl;
	cout << "Size of string: " << sizeof(string) << " bytes" << endl;

	cout << "\n\nArithmetic Operators with Examples\n\n";

	double num1 = 92,
		num2 = 22.3,
		num3 = 71.1,
		num4 = 11;

	cout << "Addition Example (num1 + num2) = " << num1 + num2 << endl;
	cout << "Subtraction Example (num2 - num3) = " << num2 - num3 << endl;
	cout << "Multiplication Example (num2 * num3 * num1) = " << num2 * num3 * num1 << endl;
	cout << "Division Example (num3 / num 4) = " << num3 / num4 << endl;
	cout << "Modulus Example (num4 % num1) = " << (int)num4 % (int)num1 << endl;
	return 0;
}

