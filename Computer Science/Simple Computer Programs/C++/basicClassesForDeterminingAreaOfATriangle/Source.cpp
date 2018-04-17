/*
Author: Nicholas Cleveland
Creation date: 08/07/16
Last modification date: 08/17/16
Purpose: Computes areas of each triangle and determines which triangle has the larger area.
*/

#include <iostream>
#include <string>
#include "Triangle.h"
using namespace std;

float askUserForInput(string);
Triangle createTriangle();
void computeLargerArea(Triangle, Triangle);
void displayArea(Triangle);

/*
Author: Nicholas Cleveland
Creation date: 08/07/16
Last modification date: 08/17/16
Purpose: Holds return values of createTriangle and calls computeLargerArea to compute.
*/
int main()
{

	Triangle tri1 = createTriangle();
	Triangle tri2 = createTriangle();

	computeLargerArea(tri1, tri2);

	system("pause");
	return 0;
}

/*
Author: Nicholas Cleveland
Creation date: 08/07/16
Last modification date: 08/17/16
Purpose: Asks user for triangle dimensions
*/

float askUserForInput(string textOutput)
{
	float value;
	cout << textOutput;
	cin >> value;
	return value;

}

/*
Author: Nicholas Cleveland
Creation date: 08/07/16
Last modification date: 08/17/16
Purpose: Creates text output and calls askUserForInput for the base and the height.
*/
Triangle createTriangle()
{
	Triangle tri;
	tri.setBase(askUserForInput("Please enter triangle base: ")); //base
	tri.setHeight(askUserForInput("Please enter triangle height: ")); //height
	return tri;

}


/*
Author: Nicholas Cleveland
Creation date: 08/07/16
Last modification date: 08/17/16
Purpose: Computes larger area
*/
void computeLargerArea(Triangle tri1, Triangle tri2)
{
	if (tri1.computeArea() > tri2.computeArea())
	{

		displayArea(tri1);

	}

	else if (tri1.computeArea() < tri2.computeArea())
	{

		displayArea(tri2);
	}

	else if (tri1.computeArea() == tri2.computeArea())
	{
		cout << "The triangles have the same area, which is: " << tri1.computeArea() << endl;

	}
}

/*
Author: Nicholas Cleveland
Creation date: 08/07/16
Last modification date: 08/17/16
Purpose: Displays larger area
*/
void displayArea(Triangle tri)
{
	cout << "The area of the larger triangle is: " << tri.computeArea() << endl;

}
