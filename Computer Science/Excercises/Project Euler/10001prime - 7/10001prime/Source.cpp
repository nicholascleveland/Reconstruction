#include <iostream>
using namespace std;

bool isPrime(int n);
int main()
{
	int counter = 0;
	int answer;
	for (int index = 0; index < INT_MAX; index++)
	{
		if (isPrime(index))
		{
			counter++;
		}
		if (counter == 10001)
		{
			answer = index;
			break;
		}
	}

	cout << answer;
	system("pause");
	return 0;
}

bool isPrime(int n)
{
	bool isPrime = true;
	if (n % 2 == 0)
	{
		isPrime = false;
	}

	for (int index = 3; index < sqrt(n); index += 2)
	{
		if (n % index == 0)
		{
			isPrime = false;
		}
	}
	return isPrime;
}