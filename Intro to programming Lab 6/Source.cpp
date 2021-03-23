// Intro To Programming Lab 6
// Mitchell Tobin 101164498


#include <iostream>
#include <iomanip>

using namespace std;

void celsius(double);

int main()
{
	int temp;
	int size = 101;
	int answer;

	cout << "Fahrenheit to Celsius Conversion Program" << endl;
	cout << "Please enter a temperature (F): ";
	cin >> temp;
	celsius(temp);
	temp = -20;
	cout << "Would you like to see a table? Press 1 for yes, 2 to close the program" << endl;
	cin >> answer;
	if (answer == 1)
	{
		for (int i = -20; i < size; i++)
		{
			celsius(temp);
			temp++;
		}
		cout << "You're welcome, I know, it's pretty cool" << endl;
	}
	else if (answer == 2)
	{
		cout << "Your loss, it was pretty cool.  Goodbye.";
	}

	return 0;
}

void celsius(double number)
{
	cout << fixed << showpoint << setprecision(1);
	double temp = 0;
	temp = (number - 32) * 5 / 9;
	cout << number << " Fahrenheit is " << temp << " in Celsius" << endl;
}