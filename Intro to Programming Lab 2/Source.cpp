// Intro to Programming Lab 2
// Mitchell Tobin 101164498

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{

	double num1, num2, num3;

	cout << "Today we are going to take three numbers of your choice and find the Sum, Product & Average!  " << endl; 

	cout << "Please choose your first number: " << endl;
	cin >> num1;

	cout << "Please choose your second number: " << endl;
	cin >> num2;

	cout << "Please choose your third & final number: " << endl;
	cin >> num3;

	cout << "Ready for this magic..." << endl << endl;

	cout << "The sum of your three numbers is " << num1 + num2 + num3 << endl;   
	cout << "The product of your three numbers is " << num1 * num2 * num3 << endl;
	cout << "The average of your three numbers is " << (num1 + num2 + num3) / 3 << endl;

	return 0;
}