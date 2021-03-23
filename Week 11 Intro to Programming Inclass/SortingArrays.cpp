//#include <iostream>
//using namespace std;
//
//// Function prototypes
//
//void sortArray(int[], int);
//void showArray(const int[], int);
//
//int main()
//{
//	const int SIZE = 6;
//
//	// Array of unsorted values
//	
//	int values[SIZE] = { 7, 2, 3, 8, 9, 1 };
//
//	// Display the values
//	cout << "The unsorted values are:\n";
//	showArray(values, SIZE);
//
//	// Sort the values
//
//	sortArray(values, SIZE);
//
//	// Display again
//
//	cout << "The sorted values are:\n";
//	showArray(values, SIZE);
//
//	return 0;
//}
//// Bubble sort
//void sortArray(int array[], int size)
//{
//	int temp;
//	bool swap;  // Flag to indicate a swap is needed
//
//	do
//	{
//		swap = false;
//		for (int i = 0; i < (size - 1); i++)
//		{
//			if (array[i] > array[i + 1])  // Compares adjacent items in the array
//			{
//				// Swap
//				temp = array[i];
//				array[i] = array[i + 1];
//				array[i + 1] = temp;
//
//				swap = true;
//			}
//		}
//
//	} while (swap);
//}
//void showArray(const int array[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << array[i] << " ";
//
//	}
//	cout << endl;
//}