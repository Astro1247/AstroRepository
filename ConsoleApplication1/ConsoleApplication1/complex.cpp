#include "stdafx.h"
#include "complex.h"


void complex::getInput(int &a, int &b)
{
	printf("Enter a: ");
	scanf("%i", &a);
	printf("Enter b: ");
	scanf("%i", &b);
}

int complex::setComplexNumber(int a, int b)
{
	if (a == NULL || b == NULL) return 0;
	this->a = a;
	this->b = b;
	return 1;
}

void complex::operator+(complex *comp)
{
	this->a = a + comp->a;
	this->b = b + comp->b;
}


