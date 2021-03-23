#include <iostream>
using namespace std;

class Demo
{
public:  
	Demo()  // <-- Default constructor
	{
		cout << "Now the constructor is running.\n";
	}
	~Demo()
	{
		cout << "Now the destructor is running.\n";
	}
};

//int main()
//{
//	cout << "this is diplayed before the object is created.\n";
//
//	Demo demoObj;  // Defining a demo object
//
//	cout << "this is displayed before the object is created.\n";
//
//	return 0;
//}