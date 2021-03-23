//#include <iostream>
//#include <iomanip>
//#include <string>
//using namespace std;
//
//struct CostInfo
//{
//	double  food,
//			medical,
//			license,
//			misc;
//};
//
//struct PetInfo
//{
//	string name;
//	string type;
//	int age;
//
//	CostInfo cost;
//
//	PetInfo()   //<-- Default Constructor
//	{
//		name = "unknown";
//		type = "unknown";
//		age = 0;
//
//		cost.food = cost.medical = cost.license = cost.misc = 0.0;
//	}
//};
//
//int main()
//{
//	PetInfo pet;
//
//	// Assigns values to the pet member variables.
//	pet.name = "Haley";  // My little doggo
//	pet.type = "Dog";
//	pet.age = 15;
//
//	pet.cost.food = 200.00;
//	pet.cost.medical = 200.00;
//	pet.cost.license = 5.00;
//
//	// Display Total annual cost for pet
//
//	cout << fixed << showpoint << setprecision(2);
//	cout << "Annual costs for my " << pet.age << "-year-old " << pet.type << " " << pet.name
//		<< " are $" << (pet.cost.food + pet.cost.medical + pet.cost.license + pet.cost.misc) << endl;
//
//	return 0;
//}