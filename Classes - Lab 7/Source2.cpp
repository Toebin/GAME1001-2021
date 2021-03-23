//#include <iostream>
//#include <iomanip>
//#include <string>
//using namespace std;
//
//class InventoryItem
//{
//	private:
//		int partNum;
//		string description;
//		int onHand;
//		double price;
//	public:
//		void storeInfo(int p, string d, int oH, double cost); //Prototype
//
//		int getPartNum() { return partNum; }
//		string getDescription() { return description; }
//		int getOnHand() { return onHand; }
//		double getPrice() { return price; }
//};
//
//void InventoryItem::storeInfo(int p, string d, int oH, double cost)  //Function dedicated to adding things to our shit
//{
//	partNum = p;
//	description = d;
//	onHand = oH;
//	price = cost;
//}
//
//void storeValues(InventoryItem&);  //Recieve an object by reference
//void showValues(InventoryItem);   //Recieve an object by value
//
//int main()
//{
//	InventoryItem part;
//
//	storeValues(part);
//	showValues(part);
//	return 0;
//}
//
//void storeValues(InventoryItem& item)
//{
//	int partNum;
//	string description;
//	int qty;
//	double price;
//
//	cout << "Enter data for the new part \n";
//	cout << "Part number: ";
//	cin >> partNum;
//	cout << "Description: ";
//	cin.get();  // Moves past the \n
//	getline(cin, description);
//	cout << "quantity on hand: ";
//	cin >> qty;
//	cout << "Unit Price: ";
//	cin >> price;
//
//	item.storeInfo(partNum, description, qty, price);
//}
//
//void showValues(InventoryItem item)
//{
//	cout << fixed << setprecision(2) << endl;
//	cout << "Part Number      : " << item.getPartNum() << endl;
//	cout << "Description      : " << item.getDescription() << endl;
//	cout << "Units on Hand    : " << item.getOnHand() << endl;
//	cout << "Unit Price       : " << item.getPrice() << endl;
//}