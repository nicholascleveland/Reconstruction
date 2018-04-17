/*

A palindromic number reads the same both ways.
The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.

*/
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;
int product(int a, int b);
bool isPalindrome(int prevResult);
void reverseString(string& input);
int findMaxPalindrome(vector<int> palindromes);
int main()
{
	int result;
	vector<int> results;
	//Find the largest palindrome made from the product of two 3-digit numbers.
	
	for (int index = 100; index <= 999; index++)
	{
		for (int index2 = 100; index2 <= 999; index++)
		{

			result = product(index, index2);
			if (isPalindrome(result))
			{
				cout <<"PALINDROME: "<<result << endl;
				results.push_back(result);
			}
		}
	}

	int max = findMaxPalindrome(results);
	system("pause");
	return 0;
}

int product(int a, int b)
{
	int result = a * b;
	return result;
}
bool isPalindrome(int prevResult)
{
	bool isP = 0;
	string preResultString = to_string(prevResult);
	string preResultStringRev = to_string(prevResult);
	reverseString(preResultStringRev);
	
		if (preResultString == preResultStringRev)
		{
			isP = 1;
		}

	return isP;
}

void reverseString(string& input)
{
	char first;
	char last;
	char holder;
	for (int index = 0; index < input.length() / 2; index++)
	{
		first = input[index];
		last = input[input.length() - 1 - index];
		holder = first;
		first = last;
		last = holder;
		input[index] = first;
		input[input.length() - 1 - index] = last;
	}

}

int findMaxPalindrome(vector<int> palindromes)
{
	int max = palindromes[0];
	for (int index = 0; index < palindromes.size(); index++)
	{
		if (max < palindromes[index])
		{
			max = palindromes[index];
		}
	}
	return max;
}