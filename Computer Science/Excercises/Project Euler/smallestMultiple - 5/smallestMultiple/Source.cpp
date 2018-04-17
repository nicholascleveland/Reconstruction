/*

2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?


*/
#include <iostream>
using namespace std;
int smallestMultiple();
//Note: Bad code, brutal brute force
int main()
{
	int a;
	a = smallestMultiple();
	cout << a;
	system("pause");
	return 0;
}
int smallestMultiple()
{
	int sm = 0;
	for (int index = INT_MAX; index >= 1; --index)
	{
		if (index % 1 == 0 && index % 2 == 0 && index % 3 == 0 && index % 4 == 0 && index % 5 == 0 && index % 6 == 0 && index % 7 == 0 && index % 8 == 0 && index % 9 == 0 && index % 10 == 0 && index % 11 == 0 && index % 12 == 0 && index % 13 == 0 && index % 14 == 0 && index % 15 == 0 && index % 16 == 0 && index % 17 == 0 && index % 18 == 0 && index % 19 == 0 && index % 20 == 0)
		{
			sm = index;
		}
	}

	return sm;
}


