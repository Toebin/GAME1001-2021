// FAILED ATTEMPT :( gg's

//#include <iostream>
//
//using namespace std;
//
//// Function Prototypes
//
//void selectionSort(int[], int); 
//void showrandArray(const int[], int);
//
//
//int main()
//{
//	const int SIZE = 10;
//
//	cout << "This program creates a random array size 10 & sorts them.\n";
//
//	
//	// Randomized Array size 10 between values 1-100 inclusive.
//
//	int randArray[SIZE];
//	for (int i = 0; i < SIZE; i++)
//		randArray[i] = rand() % 101;  // Generates number from 1-100
//
//	cout << "\nThe unsorted elements of the array: " << endl;
//
//	for (int i = 0; i < SIZE; i++)
//		cout << "Elements number " << i + 1 << ": " << randArray[i] << endl;
//
//	cout << "The sorted values are:\n";
//	showrandArray(randArray, SIZE);
//
//	// Sort the array
//	selectionSort(randArray, SIZE);
//
//	return 0;
//}
//
//void selectionSort(int randArray[], int size)
//{
//	int startScan, minIndex, minValue;
//
//	for (startScan = 0; startScan < (size - 1); startScan++)
//	{
//		minIndex = startScan;          // minIndex is where we swap the next smallest value into
//		minValue = randArray[startScan];  // Where we are starting the scan from
//		for (int i = startScan + 1; i < size; i++)
//		{
//			// Compare the current i value to minValue
//			if (randArray[i] < minValue)
//			{
//				// New mininum value
//				minValue = randArray[i];
//				minIndex = i;
//			}
//		}
//
//		// Perform the necessary swap
//		randArray[minIndex] = randArray[startScan];
//		randArray[startScan] = minValue;
//	}
//}
//
//void showrandArray(const int randArray[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << randArray[i] << " ";
//	}
//	cout << endl;
//}