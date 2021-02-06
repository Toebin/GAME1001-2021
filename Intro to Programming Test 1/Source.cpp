#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{

	// Declare Items 

	double item1 = 299.99, item2 = 89.75, item3 = 189.95, item4 = 150.89, item5 = 429.45;
	float basepay = 200;
	int quan1{};
	int quan2{};
	int	quan3{};
	int	quan4{};
	int quan5{};
	double quanTotal{};
	double fullTotal{};
	int quanSum{};
	
	
	cout << "Hello There!  Today we are going to calculate your wage!  How fun... Remember, we do not sell half items, finish your sales fully in order to get paid!" << endl << endl;

	cout << "1. Item 1 ($299.99)\n" << "2. Item 2 ($89.75)\n" << "3. Item 3 ($189.95)\n" << "4. Item 4 ($150.89)\n" << "5. Item 5 ($429.45)\n\n\n";


	cout << "How many units of item 1 ($299.99) did you sell? " << endl;
		cin >> (quan1);

		
		if (quan1 < 0)
		{
			while (quan1 < 0)
			{
				cout << "You can't sell negative units!" << endl;
				cout << "How many units of item 1 ($299.99) did you sell? " << endl;
					cin >> (quan1);
			}

				cout << endl;
			
		}
		else
		{
			quan1 >= 0;
			cout << endl;
		}
			
		

	cout << "How many units of item 2 ($89.75) did you sell? " << endl;
		cin >> (quan2);
		
		if (quan2 < 0)
		{
			while (quan2 < 0)
			{
				cout << "You can't sell negative units!" << endl;
				cout << "How many units of item 2 ($89.75) did you sell? " << endl;
				cin >> (quan2);
			}

			cout << endl;

		}
		else
		{
			quan2 >= 0;
			cout << endl;
		}

	cout << "How many units of item 3 ($189.95) did you sell? " << endl;
		cin >> (quan3);

		if (quan3 < 0)
		{
			while (quan3 < 0)
			{
				cout << "You can't sell negative units!" << endl;
				cout << "How many units of item 3 ($189.95) did you sell? " << endl;
				cin >> (quan3);
			}

			cout << endl;

		}
		else
		{
			quan3 >= 0;
			cout << endl;
		}
		
	cout << "How many units of item 4 ($150.89) did you sell? " << endl;
		cin >> (quan4);

		if (quan4 < 0)
		{
			while (quan4 < 0)
			{
				cout << "You can't sell negative units!" << endl;
				cout << "How many units of item 4 ($150.89) did you sell? " << endl;
				cin >> (quan4);
			}

			cout << endl;

		}
		else
		{
			quan4 >= 0;
			cout << endl;
		}
	
		
	cout << "How many units of item 5 ($429.45) did you sell? " << endl;
		cin >> (quan5);

		if (quan5 < 0)
		{
			while (quan5 < 0)
			{
				cout << "You can't sell negative units!" << endl;
				cout << "How many units of item 5 ($429.45) did you sell? " << endl;
				cin >> (quan5);
			}

			cout << endl;

		}
		else
		{
			quan5 >= 0;
			cout << endl;
		}

		quanSum = (quan1 + quan2 + quan3 + quan4 + quan5);
		quanTotal = (quan1 * item1) + (quan2 * item2) + (quan3 * item3) + (quan4 * item4) + (quan5 * item5);
		fullTotal = quanTotal * 0.09 + basepay;
		
		cout << fixed;
		cout << setprecision(2);

		cout << "You sold " << quanSum << " items! " << endl;
		cout << "Your total earnings are $" << fullTotal << "!" << endl; 
	
	


	

}