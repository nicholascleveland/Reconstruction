/*
Author: Nicholas Cleveland
Creation date: 08/10/16
Last modification date: 08/17/16
Purpose: To create and observe a recursive funciton through creating a function that calls itself.
*/

#include <iostream>
using namespace std;
float RecursiveFunction(float);


/*
Author: Nicholas Cleveland
Creation date: 08/10/16
Last modification date: 08/17/16
Purpose: Main function intitally calls the recursive function and stores its return value into a variable.
*/
int main()
{

	float N;
	cout << "Enter N: ";
	cin >> N;
	float ReturnValue = RecursiveFunction(N);
	system("pause");
	return 0;
}

/*
Author: Nicholas Cleveland
Creation date: 08/10/16
Last modification date: 08/17/16
Purpose: Function prints statement when the variable N2 reaches one. The variable decrements
through the argument in the recursive function.
*/
float RecursiveFunction(float N2)
{
	if (N2 == 1)
	{
		cout << N2 << endl;
		cout << "You have learned recursion." << endl;
		return N2;

	}
	else
	{
		cout << N2 << endl;
		return RecursiveFunction(N2 - 1);


	}


}