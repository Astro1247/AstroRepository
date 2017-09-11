#pragma once
class complex
{
public:
	double a;
	double b;
	void getInput(double &a, double &b);
	double setComplexNumber(double a, double b);
	void operator+(complex *comp);
	void operator-(complex *comp);
};

