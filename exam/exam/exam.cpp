#include "stdafx.h"
#include <stdlib.h>
#include "iostream"
#include "A.h"
#include <time.h>


using namespace std;

int main()
{
	system("cls");

	cout << "1 generation: " << endl;
	A a1(10); 
	a1.Show();
	cout << endl << "2 generation: " << endl;
	A a2(a1);
	a2.Show();
	cout << endl << "3 generation: " << endl;
	A a3(a2);
	a3.Show();
	cout << endl << "4 generation: " << endl;
	A a4(a3);
	a4.Show();
	cout << endl << "5 generation: " << endl;
	A a5(a4);
	a5.Show();
	cout << endl << "6 generation: " << endl;
	A a6(a5);
	a6.Show();
	cout << endl << "7 generation: " << endl;
	A a7(a6);
	a7.Show();
	cout << endl << "8 generation: " << endl;
	A a8(a7);
	a8.Show();
	cout << endl << "9 generation: " << endl;
	A a9(a8);
	a9.Show();
	cout << endl << "10 generation: " << endl;
	A a10(a9);
	a10.Show();
	cout << endl << "11 generation: " << endl;
	A a11(a10);
	a11.Show();
	cout << endl << "12 generation: " << endl;
	A a12(a11);
	a12.Show();
	cout << endl << "13 generation: " << endl;
	A a13(a12);
	a13.Show();

	getchar();
	system("cls");

	int last = 0;

	for (int i  = 0; i < 25; i++)
	{
		cout << endl << "Start gen: " << endl;
		srand(time(NULL));
		A astart(last + rand() % 1000);
		astart.Show();
		cout << endl << i << " gen: " << endl;
		A anew(astart);
		anew.Show();
		last = anew.random;
	}


	getchar();
	system("cls");

	struct A {
		int i;
	};

	struct B : virtual A {
	};

	struct C : virtual A {
	};


	struct D : B, C {
	};

	D d;
	//d.i = 10;
	d.B::i = 10;
	cout << d.i;
	getchar();

	return 0;
}