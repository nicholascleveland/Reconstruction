/*
Author: Nicholas Cleveland

Creation Date: 07/20/16

Last modification date: 07/20/16

Purpose: Write a program that reads a file “hello.txt” and display the following content: This is my first read file program”.
After reading and presenting the content your program should prompt the user for First and Last name and write a new file called
“bye.txt” that will contain the following message: “This is my first read file program!
(use the string you read from the previous file) <nwl> It was written by FirstName LastName <nwl> Bye !”.




*/


//libraries
#include <iostream>
#include <fstream>
#include <string>


//these are not required but are useful
#define infile "hello.txt" //inputfile
#define outfile //outputfile 
using namespace std;


int main()
{
	ifstream eds; //used to read
	ofstream pds; //used to write

				  //open file to read 
	eds.open(infile);

	//open file to write

	pds.open("bye.txt");





	//create some variable to help you store what you will read and prompt the user



	//reading word by word
	string Text;
	while (!eds.eof())
	{

		//read each word from eds

		getline(eds, Text);
		
		//make a string with the words read

	}
	//present the text into the screen 
	cout << Text << endl;

	//prompt user for first and last name
	string firstName;
	cout << "Enter first name: ";
	cin >> firstName;
	string lastName;
	cout << "Enter last name: ";
	cin >> lastName;


	//construct the pds output that will be used into bye.txt, don’t forget to

	pds << Text << endl;
	pds << "It was written by " << firstName << " " << lastName << endl;
	pds << "Bye!" << endl;
	//Use what you read from hello.txt


	//close both eds and pds 
	eds.close();
	pds.close();

	system("pause");
	return 0;
}

//pds = cout for files