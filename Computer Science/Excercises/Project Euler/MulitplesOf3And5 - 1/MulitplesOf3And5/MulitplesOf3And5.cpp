// MulitplesOf3And5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>


/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/
int sumOfMultiples();
bool isMultiple(int index);

int main()
{
	//all natural numbers that are below 10 and multiples of 3 or 5: 
	//find the sum of all the multiples of 3 or 5 below 1000
	//ok


std::cout << sumOfMultiples();
system("pause");
    return 0;
}

//just going to use functions in the main file here. nothing professional going on here.



int sumOfMultiples()
{
	int sum = 0;
	for (int index = 0; index < 1000; index++)
	{
		if (isMultiple(index))
		{
			sum += index;
		}
	}
	return sum;
}


bool isMultiple(int index)
{
	bool multiple = false;
	if (( index % 3 == 0) || (index % 5 == 0))
	{
		multiple = true;
	}
	return multiple;

}

