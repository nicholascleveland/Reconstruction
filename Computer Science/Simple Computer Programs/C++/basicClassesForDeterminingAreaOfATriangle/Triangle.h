/*
Author: Nicholas Cleveland
Creation date: 08/07/16
Last modification date: 08/17/16
Purpose: Defines class and objects in public and private.
*/

#pragma once
#ifndef TRIANGLE_H
#define TRIANGLE_H


class Triangle
{

public:

	float computeArea();
	float getHeight();
	float getBase();
	void setHeight(float);
	void setBase(float);


private:

	float base;
	float height;


};
#endif


