/*
Author: Nicholas Cleveland
Creation date: 07/20/16
Last modification date: 07/21/16
Purpose: Program computes the weekly salary of each employee. 
The program prints the first name, last name, and weekly salary of each employee in a file names “results.txt”
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;


#define inFile "employees.txt"
#define outFile "results.txt"

float payCalcs(ifstream&, ofstream&);

int main()
{
	float totalPayment;
	ifstream eds;
	ofstream pds;

	eds.open(inFile);
	pds.open(outFile);


	totalPayment = payCalcs(eds, pds);


	eds.close();
	pds.close();
	system("pause");
	return 0;
}


float payCalcs(ifstream& eds, ofstream& pds)
{
	string firstName;
	string lastName;

	float hours;
	float payRate;
	float salary;

	float amount = 0.0;


	eds >> firstName >> lastName >> hours >> payRate;

	while (!eds.eof())
	{

		salary = hours * payRate;

		pds << firstName << " " << lastName << " " << salary << endl;

		amount += salary;

		eds >> firstName >> lastName >> hours >> payRate;
	}
	return amount;
}
