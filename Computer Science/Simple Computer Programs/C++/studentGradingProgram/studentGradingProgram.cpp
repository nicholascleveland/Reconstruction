/*
Author: Nicholas Cleveland
Creation date: 08/08/16
Last modification date: 08/09/16
Purpose: Program computes student answers and names, then outputs student names and corresponding letter grade, based off of how
many answers they got right.


*/



#include <iostream>
#include <string>
#include <fstream>
using namespace std;



//constant
const int SIZE = 100;

//struct
struct studInfo
{
	string firstname;
	string lastname;
	string answer;
	int numberOfStudents;
	string letterGrade;


};

studInfo students[SIZE];



//define in and out files
#define inFile1 "settings.txt"
#define inFile2 "exam.txt"
#define outFile "grades.txt"



//prototypes
float gradeAnswer(string, string, float);
float calculatePointGrade(float, float);
string calculateLetterGrade(float);
void readSettings(ifstream&, string&, float&);
void processStudent(ifstream&, string&, string&, string&);


/*
Author: Nicholas Cleveland
Creation Date: 08/08/16
Last modification date: 08/09/16
Purpose: Main function defines variable names and calls functions

*/


int main()
{
	string keyanswer;
	float numQ;
	ifstream ins1;
	ifstream ins2;
	ofstream ons;

	ins1.open(inFile1);
	ins2.open(inFile2);
	ons.open(outFile);

	//function calls	
	readSettings(ins1, keyanswer, numQ); // settings file call

	processStudent(ins2, students[SIZE].firstname, students[SIZE].lastname, students[SIZE].answer); //students file call

																									//while loop start
	while (!ins2.eof())
	{

		ons << students[SIZE].firstname << " " << students[SIZE].lastname;

		float FinalScore = gradeAnswer(students[SIZE].answer, keyanswer, numQ); // holds return of gradeAnswer

		float DecimalGrade = calculatePointGrade(FinalScore, numQ); // holds return of pointGrade

		students[SIZE].letterGrade = calculateLetterGrade(DecimalGrade); // stores letter grade

		ons << " " << students[SIZE].letterGrade << endl; // output letter grade

		readSettings(ins1, keyanswer, numQ); // settings file call

		processStudent(ins2, students[SIZE].firstname, students[SIZE].lastname, students[SIZE].answer); // students file call

	}


	system("pause");
	return 0;
}



// Author: Nicholas Cleveland
// Creation Date: 08/08/16
// Last Modification Date: 08/09/16
// Purpose: compares answer with key (character per character). 
//          Each character represents the answer to a question. 
//          The number of questions is numOfQuestions. 
//  Returns the number of correct answers 
float gradeAnswer(string answers, string key, float numOfQuestions)
{
	float score = 0.0;

	for (int i = 0; i < numOfQuestions; i++) {

		if (answers[i] == key[i])
		{
			score++;
		}
		else if (answers[i] != key[i])
		{
			score = score;
		}

	}

	return score;

}


// Author: Nicholas Cleveland
// Creation Date: 08/08/16
// Last Modification Date: 08/09/16
// Purpose: Gets the number of correct questions and the total 
//          number of questions. Returns the grade out of 100 
float calculatePointGrade(float numOfCorrectAnswers, float numOfQuestions)
{
	float gradeToPerc = (numOfCorrectAnswers / numOfQuestions) * 100;

	return gradeToPerc;


}

// Author: Nicholas Cleveland
// Creation Date: 08/08/16
// Last Modification Date: 08/09/16
// Purpose: Returns the letter grade using the following:
//          >=90 A 
//          <90 and >=80  B
//          <80 and >= 70  C 
//          <70 and >= 60  D
//          <60 and >= 50  E 
//          <50     F 
string calculateLetterGrade(float pointGrade)
{
	string grade;
	if (pointGrade >= 90)
	{
		grade = "A";

	}
	else if (pointGrade < 90 && pointGrade >= 80)
	{
		grade = "B";
	}
	else if (pointGrade < 80 && pointGrade >= 70)
	{
		grade = "C";
	}
	else if (pointGrade < 70 && pointGrade >= 60)
	{
		grade = "D";
	}
	else if (pointGrade < 60 && pointGrade >= 50)
	{
		grade = "E";
	}
	else if (pointGrade < 50)
	{
		grade = "F";
	}
	return grade;
}

// Author: Nicholas Cleveland
// Creation Date: 08/08/16
// Last Modification Date: 08/09/16
// Purpose: Returns the number of questions and answer 
//          key of the exam (both as reference parameters) 
//          We assume the file settings contains only two date:
//          Number of questions (in line 1 of the file) 
//          Answer key (line 2 of the file) 
void readSettings(ifstream& settings, string& key, float& numOfQuestions)

{
	settings >> numOfQuestions >> key;

}


// Author: Nicholas Cleveland
// Creation Date: 08/08/16
// Last Modification Date: 08/09/16
// Purpose: Returns student firstname, last name and answers 
//          (as reference parameters) 
//          We assume the file exam:
//          Student first name, lastname, and answers.

void processStudent(ifstream& ins, string& firstName, string& lastName, string& stuAnswers)
{

	ins >> firstName >> lastName >> stuAnswers;

}
