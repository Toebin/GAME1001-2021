#pragma once
// Header file for Lab 7 - Rectangle

class Rectangle
{
	private: 
		double length;
		double width;

	public: 
		double setLength(double);
		double setWidth(double);

		double getLength() { return length; }
		double getWidth() { return width; }
		double getArea() { return length * width; }
		double getPerimeter() { return 2 * (length + width); }
};
