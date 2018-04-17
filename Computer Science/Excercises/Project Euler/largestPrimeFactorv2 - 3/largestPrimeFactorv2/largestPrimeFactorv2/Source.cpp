/*
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
*/
#include <iostream>
#include <cmath>
#include <vector>
std::vector<long int> findPrimeFactors(long int n, std::vector<int>primes);
long int findLargestPrimeNumber(std::vector<int> primes);

int main()
{
	std::vector<long int> primes;
	std::vector<long int> results = findPrimeFactors(600851475143, primes);
	long int x = findLargestPrimeNumber(results);
	std::cout << x;
	system("pause");
	return 0;
}
std::vector<long int> findPrimeFactors(long int n, std::vector<long int>primes)
{
	//ex: 26 -> 2,13

	while (n % 2 == 0)
	{
		//number divisible by 2
		//std::cout << 2 << std::endl;
		primes.push_back(2);
		n = n / 2;
	}
	//n has to be ODD at this point

	for (long int index = 3; index < sqrt(n); index += 2)
	{
		while (n % index == 0)
		{
			//std::cout << index << std::endl;
			primes.push_back(index);
			n = n / index;
		}
	}

	if (n > 2)
	{
		//std::cout << n << std::endl;
		primes.push_back(n);
	}

	return primes;
}
long int findLargestPrimeNumber(std::vector<long int> primes)
{
	long int max = primes[0];
	for (long int index = 0; index < primes.size(); ++index)
	{
		if (max < primes[index])
		{
			max = primes[index];
		}
	}

	return max;
}
