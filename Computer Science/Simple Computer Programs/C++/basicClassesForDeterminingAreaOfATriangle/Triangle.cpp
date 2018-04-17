/*
Author: Nicholas Cleveland
Creation date: 08/07/16
Last modification date: 08/17/16
Purpose: Defines functions of type Triangle. Needs to include the header file Triangle.h
*/

#include "Triangle.h"
using namespace std;


/*
Author: Nicholas Cleveland
Creation date: 08/07/16
Last modification date: 08/17/16
Purpose: Defines base, b.
*/

void Triangle::setBase(float b)
{

	base = b;

}

/*
Author: Nicholas Cleveland
Creation date: 08/07/16
Last modification date: 08/17/16
Purpose: Defines height, h.
*/
void Triangle::setHeight(float h)
{

	height = h;

}
/*
Author: Nicholas Cleveland
Creation date: 08/07/16
Last modification date: 08/17/16
Purpose: Returns base, b.
*/
float Triangle::getBase()
{

	return base;

}
/*
Author: Nicholas Cleveland
Creation date: 08/07/16
Last modification date: 08/17/16
Purpose: Returns height, h.
*/
float Triangle::getHeight()
{

	return height;

}
/*
Author: Nicholas Cleveland
Creation date: 08/07/16
Last modification date: 08/17/16
Purpose: Returns computation of finding the area of a triangle, .5*base*height.
*/
float Triangle::computeArea()
{

	return (base * height) / (2);

}
