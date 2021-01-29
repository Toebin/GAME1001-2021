//Calculate the area of a rectangle
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	// Some Stuff // 

//	int length;
//	double width;
//	float area;

//	cout << "The program calculates the area of a rectangle.\n";

	// Ask input form the user
//	cout << "What is the length and width of the rectangle seperated by a space? ";
//	cin >> length >> width;
	

	// Some Stuff // 

//	area = length * width;
//	cout << "The area of the rectangle is " << area << endl;


//	double numerator, demoninator;

//	cout << "Enter the numerator: ";
//	cin >> numerator;
//	cout << "Enter the denominator: ";
//	cin >> demoninator;

//	cout << "The decimal value is " << (numerator / demoninator) << endl;

	// CASTING c: //

//	int books,
//		months;
//	double booksPerMonth;

	// Get input
//	cout << "How many books do you plan to read? ";
//	cin >> books;
//	cout << "How many months is it going to take you to read them? ";
//	cin >> months;

//	booksPerMonth = (static_cast <double>(books) / months);       // Book becoming a double gives months a promotion! lucky guy c: pretty cool tho no cap
//	cout << "That is " << booksPerMonth << " books per month.\n";

	// Some *COOL (post learning about it)* Stuff // 

//	int number = 83;

//	cout << number << endl;

	//What is the letter equiavent to the value?
//	cout << static_cast<char>(number) << endl;



	// OVERFLOWWWWWWWW underflow is just the reverse // 
	
//	short intVar = 32767;

	// Short is 16 byte: 

//	cout << "Original Value of intVar:   " << intVar << endl;

//	intVar += 1; // intVar = IntVar + 1
//	cout << "intVar after overflow" << intVar << endl;



	// Constants // 

//	const double PI = 3.14159;
//	double area, radius;

//	cout << "This program calculates the area of the cirle.\n";

//	cout << "What is the radius of the circle? ";
//	cin >> radius;

	// Compute
//	area = PI * pow(radius, 2);
//	cout << "The area is " << area << endl;


	// Some stuff with lots of nums // 

//	int num1 = 2897,  num2 = 5,      num3 = 837,
//		num4 = 34,    num5 = 7,      num6 = 1623,
//		num7 = 390,   num8 = 3456,   num9 = 12;

	//Display first row of numbers
//	cout << left << setw(6) << num1 << setw(6) << num2 << setw(6) << num3 << setw(6) << endl;
//	cout << setw(6) << num4 << setw(6) << num5 << setw(6) << num6 << setw(6) << endl;
//	cout << setw(6) << num7 << setw(6) << num8 << setw(6) << num9 << setw(6) << endl;



	double number1 = 132.364, number2 = 26.91;
	double quotient = number1 / number2;
	
	cout << quotient << endl;
	return 0;


}