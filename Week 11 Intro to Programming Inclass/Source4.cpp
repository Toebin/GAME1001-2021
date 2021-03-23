//#include <iostream>
//using namespace std;
//
//// Functions prototypes
//
//void selectionSort(int[], int);
//void showArray(const int[], int);
//
//int main()
//{
//	const int SIZE = 6;
//
//	// Array of unsorted values
//	int values[SIZE] = { 5, 7, 2, 8, 9, 1 };
//
//	// Display the Values
//	cout << "The unsorted values are\n";
//	showArray(values, SIZE);
//
//	// Sort the array
//	selectionSort(values, SIZE);
//
//	// Display the values again
//	cout << "The sorted values are\n";
//	showArray(values, SIZE);
//	
//	return 0;
//}
//
//void selectionSort(int array[], int size)
//{
//	int startScan, minIndex, minValue;
//
//	for (startScan = 0; startScan < (size - 1); startScan++)
//	{
//		minIndex = startScan;          // minIndex is where we swap the next smallest value into
//		minValue = array[startScan];  // Where we are starting the scan from
//		for (int i = startScan + 1; i < size; i++)
//		{
//			// Compare the current i value to minValue
//			if (array[i] < minValue)
//			{
//				// New mininum value
//				minValue = array[i];
//				minIndex = i;
//			}
//		}
//
//		// Perform the necessary swap
//		array[minIndex] = array[startScan];
//		array[startScan] = minValue;
//	}
//}
//
//void showArray(const int array[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << array[i] << " ";
//	}
//	cout << endl;
//}
