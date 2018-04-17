/*
Author: Nicholas Cleveland
Creation Date: 08/03/16
Last modification date: 08/04/16
Purpose: Displays sum and average of a two dimensional array through functions.
*/
#include <iostream>
using namespace std;

const int nrows = 4;
const int ncols = 4;
float sum(float box[][ncols]);
float avg(float);
/*
Author: Nicholas Cleveland
Creation Date: 08/03/16
Last modification date: 08/04/16
Purpose: Main function calls the functions sum and avg.
*/
int main()
{
	float box[][ncols] = { { 1, 2, 3, 4 },{ 1, 2, 3, 4 },{ 1, 2, 3, 4 },{ 1, 2, 3, 4 } };

	float result = sum(box);
	cout << "The sum is: " << result << endl;

	float result2 = avg(result);
	cout << "The average is: " << result2 << endl;
	system("pause");
	return 0;
}
/*
Author: Nicholas Cleveland
Creation Date: 08/03/16
Last modification date: 08/04/16
Purpose: Sums all the elements of a two dimensional array, returning the total and displays its result.
*/
float sum(float box2[][ncols])
{
	float Sum = 0.0;
	for (int r = 0; r < nrows; r++)
	{
		for (int c = 0; c < ncols; c++)
		{
			Sum += box2[r][c];
		}

	}
	return Sum;

}
/*
Author: Nicholas Cleveland
Creation Date: 08/03/16
Last modification date: 08/04/16
Purpose: Takes the return value from the float sum function and calculates the average.
*/
float avg(float sum)
{
	float AVG = sum / (nrows*ncols);


	return AVG;
}

