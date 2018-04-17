/*


The sum of the squares of the first ten natural numbers is,

1^2 + 2^2 + ... + 10^2 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)^2 = 552 = 3025
Hence the difference between the sum of the squares of the first
ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first
one hundred natural numbers and the square of the sum.
*/
#include <iostream>
#include <cmath>
using namespace std;
int sumOfSquares(int n);
int squareOfSums(int n);

int main()
{

	int x = sumOfSquares(100);
	int y = squareOfSums(100);
	int difference = y - x;
	cout << difference;


	system("pause");
	return 0;
}

int sumOfSquares(int n)
{
	int sum = 0;
	for (int index = 1; index <= n; index++)
	{
		sum += pow(index, 2);
	}
	return sum;
}

int squareOfSums(int n)
{
	int sum = 0;
	for (int index = 1; index <= n; index++)
	{
		sum += index;

	}
	sum = pow(sum, 2);

	return sum;
}

