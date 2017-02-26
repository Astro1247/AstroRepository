#include "stdafx.h"
#include "iostream"
#include <cstdlib>
#include <string>

using namespace std;

/*
*  Обьявить структуру, которая позволяет сохранять комплексное число
*  Написать ф-цию позволяющую изменять комплексное число
*  Написать ф-цию print которая выводит комплексное число в привычном для нас виде (2+5*int) (?)
*  Написать ф-цию add принимающую 2 структуры и выдающую комплексное число которая является суммой тех двух
*/


struct cNum
{
	int a;
	int b;
};

void getInput(int &a, int &b)
{
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
}

int setComplexNumber(struct cNum &complexNum, int a, int b)
{
	if (a == NULL || b == NULL) return 0;

	complexNum.a = a;
	complexNum.b = b;
	return 1;
}

int main()
{
	struct cNum complex1;
	struct cNum complex2;
	struct cNum sumcomplex;
	bool stucturesInitialized = false;
	int error, menuChoice;
	int a, b;
	do
	{
		system("cls");
		error = 0;
		cout << "Menu:\n"
			<< " 1. Init structures\n"
			<< " 2. Change struct values\n"
			<< " 3. Print structures\n"
			<< " 4. Summ structues\n"
			<< " 5. EXIT\n\n"
			<< "Your choice: ";
		cin >> menuChoice;
		switch (menuChoice)
		{
		case 1:
		{
			if (!stucturesInitialized)
			{
				cout << "Initializing first struct\n";
				getInput(a, b);
				setComplexNumber(complex1, a, b);
				cout << "Initializing second struct\n";
				getInput(a, b);
				setComplexNumber(complex2, a, b);
				stucturesInitialized = true;
				cout << "Structures was initalzed successfully\n";
			}
			else
			{
				cout << "Structures are already initialized!\n";
			}
			system("pause");
			break;
		}
		case 2:
		{
			if (!stucturesInitialized)
			{
				cout << "Error\n"
					<< "Structures are not initialized\n";
				system("pause");
				break;
			}
			int a, b;
			int structNum, error;
			do
			{
				error = 0;
				cout << "What struct do you want to change?\n"
					<< " 1. First struct\n"
					<< " 2. Second struct\n"
					<< "Your choice: ";
				cin >> structNum;
				switch (structNum)
				{
				case 1:
				{
					cout << "Setting first struct\n";
					getInput(a, b);
					setComplexNumber(complex1, a, b);
					cout << "Struct 1 successfully changed\n";
					break;
				}
				case 2:
				{
					cout << "Setting second struct\n";
					getInput(a, b);
					setComplexNumber(complex2, a, b);
					cout << "Struct 2 successfully changed\n";
					break;
				}
				default:
				{
					cout << "Incorrect input\n";
					error = 1;
					break;
				}
				}
			} while (error != 0);
			system("pause");
			break;
		}
		case 3:
		{
			if (!stucturesInitialized)
			{
				cout << "Error\n"
					<< "Structures are not initialized\n";
				system("pause");
				break;
			}
			cout << "First  struct: " << complex1.a << " + " << complex1.b << "i\n";
			cout << "Second struct: " << complex2.a << " + " << complex2.b << "i\n";
			system("pause");
			break;
		}
		case 4:
		{
			if (!stucturesInitialized)
			{
				cout << "Error\n"
					<< "Structures are not initialized\n";
				system("pause");
				break;
			}
			sumcomplex.a = complex1.a + complex2.a;
			sumcomplex.b = complex1.b + complex2.b;
			cout << "Summ num: " << sumcomplex.a << " + " << sumcomplex.b << "i\n";
			system("pause");
			break;
		}
		case 5:
			return 0;
		default:
		{
			cout << "Incorrect input\n";
			error = 1;
			system("pause");
			break;
		}
		}
	} while (true);
}