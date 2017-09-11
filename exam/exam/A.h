#pragma once

class A
{
public:
	int random;
	int lastrandom;
	A();
	A(int a);
	A(A &a);
	~A();
	void Show();
	void Gen();
};

