//* Intro To Programming Lab 3 *\\

// Mitchell Tobin - 101164498


#include <iostream>
#include <String>
#include <iomanip>

using namespace std;

int main()
{

	// Declaring Variables 

	float hoursWorked{};
	float hourlyRate{};
	float regularPay{};
	float overtimePay{};
	float totalPay{};
	float overtimeHours{};

	

	cout << "How many hours did you work this week?\n";
		cin >> hoursWorked;
	cout << "How much do you make an hour?\n";
		cin >> hourlyRate;
		
		if (hoursWorked > 40)
		{
			overtimeHours = (hoursWorked - 40);
			regularPay = 40 * hourlyRate;
			overtimePay = overtimeHours * (hourlyRate * 1.5);
			totalPay = overtimePay + regularPay;
			cout << "\nRegular pay totals to = $" << regularPay << endl <<endl;
			cout << "Overtime pay totals to = $" << overtimePay << endl << endl;
			cout << "Total pay totals to = $" << totalPay << endl << endl;
		}
		else
		{
			regularPay = hoursWorked * hourlyRate;
			cout << "\nTotal pay totals to = $" << regularPay << endl;
		}






}