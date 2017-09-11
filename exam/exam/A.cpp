#include "stdafx.h"
#include "A.h"
#include <iostream>
#include "time.h"

using namespace std;
A::A(int a)
{
	Gen();
	lastrandom = NULL;
}
void A::Gen()
{
	srand(time(NULL));
	random = rand() % 1000;
}

A::A(A &a)
{
	lastrandom = a.random;
	srand(time(NULL));
	random = lastrandom + rand() % 1000;
}

void A::Show()
{
	if (lastrandom != NULL)
		cout << "Last random number: " << lastrandom << endl;
	cout << "Current random number: " << random << endl;
}


A::~A()
{
}
