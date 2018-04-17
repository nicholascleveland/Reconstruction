/*
Author: Nicholas Cleveland
Date: 06/14/16
*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int backwardsInt(int Value);

int main() {

	int digit;

	cout << "Enter an integer : ";

	cin >> digit;

	cout << "Backwards : " << backwardsInt(digit) << endl;

	system("pause");
	return 0;
}

int backwardsInt(int Value)
{
	int number;
	int reverse = 0;

	while (Value != 0) {
		number = Value % 10;
		Value = Value / 10;
		reverse = (reverse * 10) + number;
	}
	return reverse;
}