#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int strCar;
	int intMiles;
	int intDays;
	int intFree;
	float intCost;
	float intDayCost;
	float intTotal;
	int charEndDay;
	float fltTotalDay = 0.0;
	char charCode = 0.0;
	
	cout << "             ___________" << endl;
	cout << "         ___//__][__][__\\  " << endl;
	cout << "        (o  _|  -|  |  _ |  " << endl;
	cout << "         `-(_)--------(_)' " << endl;
	cout << " " << endl;
	cout << "Welcome to Blah Blah Rental Car" << endl;
	cout << "-------------------------------" << endl;
	cout << "Please Enter Customer Member Number: " << endl;
	
	cin >> charEndDay;
	while (charEndDay != 98765)
	{
		cout << "" << endl;
		cout << "Discount Code: \n A for AAA \n B for Employee \n X for none \n" << endl;
		cin >> charCode;
		switch (charCode)
	case 'A':
	case 'a':
	{
		charCode = -30.00;
	case 'B':
	case 'b':
		charCode = -60.00;

	default:
		charCode = 0.00;
	}
		
		cout << " Enter number of days desired " << endl;
		cin >> intDays;
		cout << " Enter number of miles expected " << endl;
		cin >> intMiles;

		cout << "Enter 1 for Sports Car \n Enter 2 for Mid-size \n Enter 3 for Economy" << endl;
		cin >> strCar;

		if (strCar == 1) {
			cout << "" << endl;
			cout << "Sports Car selected \n" << endl;
			intDayCost = intDays * 50;
			intFree = intDays * 100;
			intCost = (intMiles - intFree) * 1.0;
			intTotal = intCost + intDayCost + charCode;
			cout << "$" << intTotal << endl;
			fltTotalDay = fltTotalDay + intTotal;
		}
		else if (strCar == 2) {
			cout << "" << endl;
			cout << "Mid-size selected \n" << endl;
			intDayCost = intDays * 35;
			intFree = intDays * 100;
			intCost = (intMiles - intFree) * 0.75;
			intTotal = intCost + intDayCost + charCode;
			cout << "$" << intTotal << endl;
			fltTotalDay = fltTotalDay + intTotal;
		}
		else {
			cout << "" << endl;
			cout << "Economy Selected \n" << endl;
			intDayCost = intDays * 25;
			intFree = intDays * 100;
			intCost = (intMiles - intFree) * 0.35;
			intTotal = intCost + intDayCost + charCode;
			cout << "$" << intTotal << endl;
			fltTotalDay = fltTotalDay + intTotal;
		}
		cout << "Enter Customer Member Number: " << endl;
		cin >> charEndDay;

	}
	cout << "" << endl;
	cout << "Total Sales Today: $" << fltTotalDay << endl;
	cout << "" << endl;


	system("pause");
	return 0;
}
