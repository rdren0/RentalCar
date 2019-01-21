#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

void RentalWelcome(void);
float GetDayInfo(int , int);
float GetMileInfo(int, float);


int main(void)
{

	int strCar;
	float intCost;
	float intDayCost;
	float intTotal;
	int charEndDay;
	int charCode;
	int intFree;
	float fltTotalDay = 0.0;
	int intDays, intMiles;
	
		RentalWelcome();
	
	cout << "Please Enter Employee Number: " << endl;
	cin >> charEndDay;
	cout << "" << endl;
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
			intDayCost = GetDayInfo(intDays, 50);
			intCost = GetMileInfo(intMiles, 1.0);
			intTotal = intCost + intDayCost + charCode;
			cout << "$" << intTotal << endl;
			fltTotalDay = fltTotalDay + intTotal;
		}
		else if (strCar == 2) {
			cout << "" << endl;
			cout << "Mid-size selected \n" << endl;
			intDayCost = GetDayInfo(intDays, 35);
			intCost = GetMileInfo(intMiles, 0.75);
			intTotal = intCost + intDayCost + charCode;
			cout << "$" << intTotal << endl;
			fltTotalDay = fltTotalDay + intTotal;
		}
		else {
			cout << "" << endl;
			cout << "Economy Selected \n" << endl;
			intDayCost = GetDayInfo(intDays, 25);
			intCost = GetMileInfo(intMiles, 0.35);
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


void RentalWelcome(void)
{
	cout << "             ___________" << endl;
	cout << "         ___//__][__][__\\  " << endl;
	cout << "        (o  _|  -|  |  _ |  " << endl;
	cout << "         `-(_)--------(_)' " << endl;
	cout << " " << endl;
	cout << "Welcome to Blah Blah Rental Car" << endl;
	cout << "-------------------------------" << endl;
	return;
}

float GetDayInfo(int iDay, int carDRate){
	return iDay * carDRate;

}

float GetMileInfo(int iMile, float carMRate) {
	return iMile * carMRate;
}

