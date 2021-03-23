#include <iostream>
#include "Rectangle.h"	
using namespace std;

int main()
{
	Rectangle box1, box2;
	double boxLength1, boxLength2, boxWidth1, boxWidth2;

	// Asking user for Length and Width of 2 rectangles

	cout << "This program will calculate the area & perimeter of two rectangles.\n\n";
	cout << "Please enter the length for Rectangle 1: ";
	cin >> boxLength1;
	cout << "Please enter the width for Rectangle 1: ";
	cin >> boxWidth1;
	cout << "Please enter the length for Rectangle 2: ";
	cin >> boxLength2;
	cout << "Please enter the width for Rectangle 2: ";
	cin >> boxWidth2;

	if (!box1.setLength(boxLength1))
	{
		cout << "Invalid Rectangle 1 length entered.\n";
	}
	else if (!box1.setWidth(boxWidth1))
	{
		cout << "Invalid Rectangle 1 width entered.\n";
	}
	else if (!box2.setLength(boxLength2))
	{
		cout << "Invalid Rectangle 2 length entered.\n";
	}
	else if (!box2.setWidth(boxWidth2))
	{
		cout << "Invalid Rectangle 2 width entered.\n";
	}
	else
	{
		cout << "\n\nHere are the two rectangle's data..\n";
		cout << "\nLength Rectangle 1: " << box1.getLength() << endl;
		cout << "Width  Rectangle 1: " << box1.getWidth() << endl;

		cout << "\nLength Rectangle 2: " << box2.getLength() << endl;
		cout << "Width  Rectangle 2: " << box2.getWidth() << endl;
		
		
		cout << "\nArea of Rectangle 1: " << box1.getArea() << endl;
		cout << "Area of Rectangle 2: " << box2.getArea() << endl;
		cout << "\nPerimeter of Rectangle 1 : " << box1.getPerimeter() << endl;
		cout << "Perimeter of Rectangle 1: " << box2.getPerimeter() << endl;
	}
}