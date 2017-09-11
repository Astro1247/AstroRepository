#include "stdafx.h"
#include "complex.h"
#include <iostream>


void complex::getInput(double &a, double &b)
{
	printf("Enter a: ");
	//scanf("%d", &a);
	std::cin >> a;
	printf("Enter b: ");
	//scanf("%d", &b);
	std::cin >> b;
}

double complex::setComplexNumber(double a, double b)
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

void complex::operator-(complex *comp)
{
	this->a = a - comp->a;
	this->b = b - comp->b;
}