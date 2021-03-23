#include <iostream>
#include <cmath> // Pow function
using namespace std;

class Circle
{
	private: 
		double radius;

	public:
		Circle() { radius = 1.0; }

		void setRadius(double r)	{radius = r;}
		double getRadius()	{return radius;}
		
		//void setRadius(double r);

		double getArea();  //Function prototype
};
/*
	This function sets the radius of the circle object.
	It checks that the value passed in is greater than 0.0.
	Otherwise it uses default value of 1.0;
*/
	
////void Circle::setRadius(double r)
//{
//	if (r >= 0.0)
//	{
//		radius = r;
//	}
//}

/*
	This function calculates and returns the Circle objects area.  
	It does not need any perameters because it alreeady has access
	to the member variable radius.
*/
double Circle::getArea()  // Circle:: associates this function with the Circle class from above ^
{
	return 3.14 * pow(radius, 2);
}

//int main()
//{
//	//Define two circle objects
//
//	Circle circle1, circle2;
//	
//	cout << "the area of circle 1 is " << circle1.getArea() << endl;
//	cout << "the area of circle 2 is " << circle2.getArea() << endl;
//
//	
//	return 0;
//}