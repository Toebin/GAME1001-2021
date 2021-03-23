#include <iostream>
#include <iomanip>
using namespace std;





// Demonstrate object composition
//class Carpet
//{
//	private:
//		double pricePerSqYd;
//		Rectangle size;  // <-- composition
//
//	public:
//		void setPricePerYd(double p) {pricePerSqYd = p;}
//		void setDimensions(double len, double wid)
//		{
//			// Convert from feet to yards
//			size.setLength(len / 3);
//			size.setWidth(wid / 3);
//		}
//		double getTotalPrice()
//		{
//			return (size.getArea() * pricePerSqYd);
//		}
//};


//int main()
//{
//	Rectangle box;
//	double boxLength, boxWidth;
//
//	cout << "This program will calculate the area of a rectangle, very exciting stuff.\n";
//	cout << "What is the box length? ";
//	cin >> boxLength;
//	cout << "What is the box width? ";
//	cin >> boxWidth;
//
//	box.setLength(boxLength);
//	box.setWidth(boxWidth);
//
//	cout << "\nHere is the rectangles data:\n";
//	cout << "Length: " << box.getLength() << endl;
//	cout << "Width: " << box.getWidth() << endl;
//	cout << "Area: " << box.getArea() << endl;
//
//
//	return 0;
//}

//int main()
//{
//	Carpet purchase;
//	double pricePerYd, length, width;
//
//	cout << "Length in feet: ";
//	cin >> length;
//	cout << "Width in feet: ";
//	cin >> width;
//	cout << "Carpet price per sq. yard: ";
//	cin >> pricePerYd;
//
//	purchase.setDimensions(length, width);
//	purchase.setPricePerYd(pricePerYd);
//
//	cout << fixed << showpoint << setprecision(2);
//	cout << "\nThe total price of my new " << length << "x" << width << "carpet is $" << purchase.getTotalPrice() << endl;
//}