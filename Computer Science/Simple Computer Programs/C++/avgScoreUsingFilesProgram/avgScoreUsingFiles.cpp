
/*
Author: Nicholas Cleveland
Creation date: 07/21/16
Last modification date: 07/21/16
Purpose: Prompts the user for the file name, then calculates and displays the average score by reading the data from the file.
*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;


#define inFile "studentFile.txt"

int main()
{
	ifstream eds;

	string firstName, lastName;
	float grade;

	string fileName;
	cout << "Please enter filename: ";
	cin >> fileName;



	eds.open(inFile);
	int students = 0;
	float avg = 0.0;
	while (!eds.eof())
	{
		eds >> firstName >> lastName >> grade;
		avg += grade;
		students++;
	}
	avg = avg / students;

	cout << "The average is: " << avg << endl;

	eds.close();
	system("pause");
	return 0;
}