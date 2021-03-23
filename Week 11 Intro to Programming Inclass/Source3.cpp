//#include <iostream>
//using namespace std;
//
//// function prototype
//
//int binarySearch(const int[], int, int);
//
//const int SIZE = 20;
//
//int main()
//{
//	// Create an array of ID numbers sorted in ascending order
//	int IDnums[SIZE] = { 101, 142, 147, 189, 199, 207, 222,
//						234, 289, 296, 310, 319, 388, 394,
//						417, 429, 447, 521, 536, 600 };
//
//	int empID,    // Hold the ID to search for
//		results;  // Holds the search result
//
//
//	// Get the employee ID to search for
//	cout << "Enter the employee ID that you wish to search for: ";
//	cin >> empID;
//
//	// Search for the ID
//	results = binarySearch(IDnums, SIZE, empID);
//
//	// If binarySearch returns -1, the ID was not found
//	if (results == -1)
//	{
//		cout << "That number does not exist in the array.\n";
//	}
//	else
//	{
//		cout << "ID" << empID << " was found in element " << results << " of the array.\n";
//	}
//	return 0;
//}
//
//int binarySearch(const int array[], int size, int value)
//{
//	int first = 0,           // First array element
//		last = size - 1,	// Last array element 
//		middle,				// Midpoint of the search
//		position = -1;		// Position of the search value
//	bool found = false;
//
//	while (!found && first <= last)
//	{
//		// Found!
//		middle = (first + last) / 2;    // Calculate the midpoint
//		if (array[middle] == value)		// If value is found at middle
//		{
//			found = true;
//			position = middle;
//		}
//		else if (array[middle] > value)   // Check if value is in lower half of array
//		{
//			last = middle - 1;
//		}
//		else  // Check if value is in the upper half of the array
//		{
//			first = middle + 1;
//		}
//	}
//	return position;
//}