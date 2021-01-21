/*-~-~-~-~-~-~-~-~-~-~-~-~-~-~-
   Intro to Programming Lab 1
~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~*/

#include <iostream>
#include <string>
using namespace std; 

// Main Entry Function

int main()
{
	cout << "Size of char: " << sizeof(char) << " bytes" << endl;
	cout << "Size of bool: " << sizeof(bool) << " bytes" << endl;
	cout << "Size of short: " << sizeof(short) << " bytes" << endl;
	cout << "Size of int: " << sizeof(int) << " bytes" << endl;
	cout << "Size of float: " << sizeof(float) << " bytes" << endl;
	cout << "Size of double: " << sizeof(float) << " bytes" << endl;
	cout << "Size of long: " << sizeof(long) << " bytes" << endl;
	cout << "Size of long long: " << sizeof(long long int) << " bytes" << endl;
	cout << "Size of string: " << sizeof(string) << " bytes" << endl;

	return 0;
}

