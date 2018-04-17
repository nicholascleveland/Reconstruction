/*
Author: Nicholas Cleveland
Creation Date: 05/27/16
Last Modification Date: 05/31/16
Purpose: Find roots from values of a, b, and c entered by user in the from ax^2 + bx + c = 0
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{

	double a, b, c, xValue1, xValue2, SQRTEquation1Answer;

	cout << "Enter a, b, and c which represent the coefficients in the quadratic equation ax^2 + bx + c = 0 : ";
	cin >> a >> b >> c;
	
	if (a > 0)
	{
		double Equation1 = (b * b - 4 * a * c);
		SQRTEquation1Answer = sqrt(Equation1); //Square root of the first equation
		xValue1 = (-b + SQRTEquation1Answer) / 2 * a; // quadratic formula
		xValue2 = (-b - SQRTEquation1Answer) / 2 * a; // quadratic formula


		cout << "Root 1 is: " << xValue1 << endl;
		cout << "Root 2 is: " << xValue2 << endl;
	}
	else if (a == 0 || b * b < 4 * a * c)
	{
		cout << "No Real Root" << endl; //No real root exits
	}

	system("pause");
	return 0;
}