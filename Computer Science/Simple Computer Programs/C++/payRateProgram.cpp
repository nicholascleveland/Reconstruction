/*
Author: Nicholas Cleveland
Date: 05/27/16
*/
#include <iostream>
using namespace std;

int main()
{

	double numberHoursWorked;
	double payRate;

	cout << "How many hours did you work this week?: ";
	cin >> numberHoursWorked;
	cout << "What is your current pay rate?: ";
	cin >> payRate;
	double overtime = numberHoursWorked - 40;
	
	if (numberHoursWorked > 40)
	{
		cout << "The weekly pay is: $" << (numberHoursWorked - overtime) * payRate + (overtime * payRate * 1.5) << endl;
	}
	else if (numberHoursWorked <= 40)
	{
		cout << "The weekly pay is: $" << numberHoursWorked * payRate<< endl;

	}



	system("pause");
	return 0;
}