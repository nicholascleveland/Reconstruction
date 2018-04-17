#include <iostream>
#include <vector>
#include <algorithm>
/*
Assignment:
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
*/
std::vector<int> findPrimeFactors(int n, std::vector<int> smallPrimeDivisors, int& result, std::vector<int> usedDivisors);
int findLargestDivisor(std::vector<int> usedDivisors);
int main()
{
	int n;
	int result = 0;
	std::vector<int> smallPrimeDivisors = { 2,3,5,7 }; //apparently you can do this.
	std::vector<int> usedDivisors;
	std::vector<int>results = findPrimeFactors(26, smallPrimeDivisors, result, usedDivisors);
	//Now filter all prime factors to find the largest one.
	int answer = findLargestDivisor(results);
	std::cout << answer;
	system("pause");
	return 0;
}
std::vector<int> findPrimeFactors(int n, std::vector<int> smallPrimeDivisors, int& result, std::vector<int> usedDivisors)
{
	for (int index = 0; index < smallPrimeDivisors.size(); index++)
	{
			if (n % smallPrimeDivisors[index] == 0)
				//dont need a second check to see if this is this smallest prime divisor since our vector starts with
				//the smallest divisor and increments up
			{
				result = n / smallPrimeDivisors[index];
				usedDivisors.push_back(smallPrimeDivisors[index]);
				return findPrimeFactors(result, smallPrimeDivisors, result, usedDivisors);
			}

	}
	return usedDivisors;
}
int findLargestDivisor(std::vector<int> usedDivisors)
{
	int max = usedDivisors[0];
	for (int index = 0; index < usedDivisors.size(); index++)
	{
		if (max < usedDivisors[index])
		{
			max = usedDivisors[index];
		}
	}
	return max;
}