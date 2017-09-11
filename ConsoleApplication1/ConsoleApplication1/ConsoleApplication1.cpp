// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "stdlib.h"
#include "date.h"
#include "complex.h"
#include <ctime>
#include <Windows.h>


int main()
{
	int func = 2;
	switch (func)
	{
	case 1: //date_struct
	{
		do
		{
			system("cls");
			//time_t t = time(NULL);
			//struct tm tm = *localtime(&t);
			int day, month, year;
			date d1(15,2,2015);
			date dDefault;
			//d1.getInput(day, month, year);
			//d1.setDate(day, month, year);
			printf("Set date:     ");
			d1.print();
			printf("Default date: ");
			dDefault.print();
			system("pause");
		} while (true);
		break;
	}
	case 2: //complex number
	{
		bool stucturesInitialized = false;
		int error, menuChoice;
		double a, b;
		complex complex1;
		complex complex2;
		complex sumcomplex;
		system("pause");
		do
		{
			system("cls");
			error = 0;
			printf("Menu:\n 1. Init structures\n 2. Change struct values\n 3. Print structures\n 4. Summ structues\n 5. Overload operator '+'\n 0. EXIT\n\nYour choice: ");
			scanf("%i",&menuChoice);
			switch (menuChoice)
			{
			case 1:
			{
				if (!stucturesInitialized)
				{
					printf("Initializing first struct\n");
					complex1.getInput(a, b);
					complex1.setComplexNumber(a, b);
					printf("Initializing second struct\n");
					complex2.getInput(a, b);
					complex2.setComplexNumber(a, b);
					stucturesInitialized = true;
					printf("Structures was initalzed successfully\n");
				}
				else
				{
					printf("Structures are already initialized!\n");
				}
				system("pause");
				break;
			}
			case 2:
			{
				if (!stucturesInitialized)
				{
					printf("Error\nStructures are not initialized\n");
					system("pause");
					break;
				}
				double a, b;
				int structNum, error;
				do
				{
					error = 0;
					printf("What struct do you want to change?\n 1. First struct\n 2. Second struct\nYour choice: ");
					scanf("%i", &structNum);
					switch (structNum)
					{
					case 1:
					{
						printf("Setting first struct\n");
						complex1.getInput(a, b);
						complex1.setComplexNumber(a, b);
						printf("Struct 1 successfully changed\n");
						break;
					}
					case 2:
					{
						printf("Setting second struct\n");
						complex2.getInput(a, b);
						complex2.setComplexNumber(a, b);
						printf("Struct 2 successfully changed\n");
						break;
					}
					default:
					{
						printf("Incorrect input\n");
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
					printf("Error\nStructures are not initialized\n");
					system("pause");
					break;
				}
				printf("First  struct: %f + %fi\n", complex1.a, complex1.b);
				printf("Second  struct: %f + %fi\n", complex2.a, complex2.b);
				system("pause");
				break;
			}
			case 4:
			{
				if (!stucturesInitialized)
				{
					printf("Error\nStructures are not initialized\n");
					system("pause");
					break;
				}
				sumcomplex.a = complex1.a + complex2.a;
				sumcomplex.b = complex1.b + complex2.b;
				printf("Summ num: %f + %fi\n", sumcomplex.a, sumcomplex.b);
				system("pause");
				break;
			}
			case 5:
			{
				complex1 + &complex2;
				complex2 - &complex1;
				sumcomplex + &complex1;
				sumcomplex + &complex2;
				complex1 - &sumcomplex;
				complex2 - &sumcomplex;
				break;
			}
			case 0:
				return 0;
			default:
			{
				printf("Incorrect input\n");
				error = 1;
				system("pause");
				break;
			}
			}
		} while (true);
		break;
	}
	default:
	{
		return 0;
		break;
	}
	}
	system("pause");
    return 0;
}

