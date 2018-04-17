/*
Author: Nicholas Cleveland
Date: 06/14/16

*/
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

double calculateCharges(double hours);

int main() {
	int totalCars = 0;
	double totalCharges = 0.0;
	double charges = 0.0;
	double totalHours = 0.0;
	double hoursParked = 0.0;

	cout << "Hours parked: ";
	cin >> hoursParked;

	while (hoursParked != -1) 
	{
		totalHours = hoursParked + totalHours;
		totalCharges = calculateCharges(hoursParked) + totalCharges;
		totalCars = totalCars++;
		cout << "Hours parked: ";
		cin >> hoursParked;
	}

	cout << fixed << showpoint << setprecision(0) << totalCars << " cars today." << endl;
	cout << fixed << showpoint << setprecision(1) << "Total time cars parked: " << totalHours << " hours." << endl;
	cout << fixed << showpoint << setprecision(2) << "Charge: $" << totalCharges << endl;

	system("pause");
	return 0;
}

double calculateCharges(double hours) 
{
	double charges;
	if (hours <= 3.00) {
		return 2;
	}
	else if (hours > 3 && hours < 19) {
		charges = 2 + (ceil(hours) - 3)*0.50;
		return charges;
	}
	else
	{
		return 10;
	}
}