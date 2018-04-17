#include <iostream>
using namespace std;

bool isPalindrome(int nr);
int main() 
{
	int max = 100001;

	for (int i = 999; i >= 100; i--)
	{
		for (int j = 999; j >= 100; j--)
		{
			int p = i * j;

			if (max < p && isPalindrome(p)) 
			{
				max = p;
				cout << "What is it?, It's: " << max << endl;
				
			}
		}
	}
	cout << "The actual max is: " << max;
	system("pause");
	return 0;
}
bool isPalindrome(int nr) 
{
	int rev = 0;                    // the reversed number
	int x = nr;                     // store the default value (it will be changed)
	while (x > 0)
	{
		rev = 10 * rev + x % 10;
		x /= 10;
	}
	return nr == rev;               // returns true if the number is palindrome
}