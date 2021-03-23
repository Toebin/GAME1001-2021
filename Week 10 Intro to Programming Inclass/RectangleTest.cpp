#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	Rectangle box;
	double boxLength, boxWidth;

	// Get box length and width
	cout << "This program will calculate the area of a rectangle.\n";
	cout << "What is the length?: \n";
	cin >> boxLength;
	cout << "What is the width?: \n";
	cin >> boxWidth;

	if (!box.setLength(boxLength))
	{
		cout << "Invalid box length entered.\n";
	}
	else if(!box.setWidth(boxWidth))
	{
		cout << "Invalid box width entered.\n";
	}
	else
	{
		cout << "\n Here is the rectangle's data:\n";
		cout << "Length   :   " << box.getLength() << endl;
		cout << "Width    :   " << box.getWidth() << endl;
		cout << "Area     :   " << box.getArea() << endl;
		cout << "Perimeter:   " << box.getPerimeter() << endl;
	}
}