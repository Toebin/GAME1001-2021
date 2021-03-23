// INTRO TO PROGRAMMING TEST 2
// Mitchell Tobin 
// 101164498

#include <iostream>


using namespace std;

int num1, num2, num3, num4, num5;

// Function to display number as *

void DisplayAsterisk(int num)
{
	for (int i = 0; i != num; i++) {
		cout << "* ";
	}
}

int main()
{
	cout << "Hiya" << endl;
	cout << "Please enter 5 numbers between the range of 1 & 30.  I will display your number as an * " << endl;
	
	
	// Number 1
	cout << "1. ";
		cin >> num1;
		
		while (num1 < 1) {
			cout << "Please choose a bigger number." << endl;
			cout << "1. ";
			cin >> num1;
		}
		while (num1 > 30) {
			cout << "Please choose a smaller number." << endl;
			cout << "1. ";
			cin >> num1;
		}
		
		

	//Number 2	
	cout << "2. ";
		cin >> num2;

		while (num2 < 1) {
			cout << "Please choose a bigger number.";
			cout << "2. ";
			cin >> num2;
		}
		while (num2 > 30) {
			cout << "Please choose a smaller number.";
			cout << "2. ";
			cin >> num2;
		}
		
		

	//Number 3
	cout << "3. ";
		cin >> num3;
		
		while (num3 < 1) {
			cout << "Please choose a bigger number.";
			cout << "3. ";
			cin >> num3;
		}
		while (num3 > 30) {
			cout << "Please choose a smaller number.";
			cout << "3. ";
			cin >> num3;
		}
	

	//Number 4
	cout << "4. ";
		cin >> num4;
		
		while (num4 < 1) {
			cout << "Please choose a bigger number." << endl;
			cout << "4. ";
			cin >> num4;
		}
		while (num4 > 30) {
			cout << "Please choose a smaller number.";
			cout << "4. ";
			cin >> num4;
		}

		

	//Number 5
	cout << "5. ";
		cin >> num5;
		
		while (num5 < 1) {
			cout << "Please choose a bigger number.";
			cout << "5. ";
			cin >> num5;
		}
		while (num5 > 30) {
			cout << "Please choose a smaller number.";
			cout << "5. ";
			cin >> num5;
		}
		
		// Displaying the *

		DisplayAsterisk(num1);
		cout << endl;
		DisplayAsterisk(num2);
		cout << endl;
		DisplayAsterisk(num3);
		cout << endl;
		DisplayAsterisk(num4);
		cout << endl;
		DisplayAsterisk(num5);
		cout << endl;

		return 0;
}

