#include <iostream>
	
using namespace std;

class Rectangle
{
	private:
		double length;
		double width;

	public: 
		void setLength(double);
		void setWidth(double);

		double getLength() { return length; }
		double getWidth() { return width; }
		double getArea() { return length * width; }
};

void Rectangle::setLength(double len)
{
	if (len >= 0.0)
	{
		length = len;
	}
	else
	{
		length = 1.0;
		cout << "Invalid length, using a default value of 1" << endl;
	}
}

void Rectangle::setWidth(double wid)
{
	if (wid >= 0.0)
	{
		width = wid;
	}
	else
	{
		width = 1.0;
		cout << "Invalid width, using a default value of 1" << endl;
	}
}

int main()
{
	Rectangle box;
	double boxLength, boxWidth;

	cout << "This program will calculate the area of a rectangle" << endl;
	cout << "What is the length?";
	cin >> boxLength;
	cout << "What is the width?";
	cin >> boxWidth;

	box.setLength(boxLength);
	box.setWidth(boxWidth);

	cout << "Here is the rectangles DATA" << endl;
	cout << "Length: " << box.getLength() << endl;
	cout << "Width: " << box.getWidth() << endl;
	cout << "Area: " << box.getArea() << endl;

}