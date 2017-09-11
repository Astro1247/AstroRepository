// exam_list.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "List.h"
#include "iostream"

using namespace std;

int menu()
{
	int choose = 0;
	for (;;)
	{
		cout << "Menu:\n 1. Fill list\n 2. Set custom element\n 3. Print list\nYour choose: ";
		cin >> choose;
		if (choose < 4 && choose > 0) break;
	}
	return choose;
}

int fill(List &l1)
{
	cout << "Manual filling List, 0 to finish\n";
	for (;;)
	{
		int input;
		cin >> input;
		if (!input) break;
		l1.add(input);
	}
	return 1;
}

void print(List &l1)
{
	system("cls");
	cout << l1;
	system("pause");
}

int set(List &l1)
{
	cout << "Input element number: ";
	int num = 0;
	cin >> num;
	cout << "New element value: ";
	int value = 0;
	cin >> value;
	l1.set(num, value);
	cout << "Successful!\n";
	system("pause");
	return 1;
}

int insert(List &l1)
{
	cout << "Input element place: ";
	int num = 0;
	cin >> num;
	cout << "Element value: ";
	int value = 0;
	cin >> value;
	l1.insert(num, value);
	cout << "Successful!\n";
	system("pause");
	return 1;
}

int main()
{
	List l1;
	while (true)
	{
		int point = menu();
		switch (point)
		{
		case 1:
			fill(l1);
			system("cls");
			break;
		case 2:
			insert(l1);
			//set(l1);
			system("cls");
			break;
		case 3:
			print(l1);
			system("cls");
			break;
		default:
			break;
		}
	}


	system("pause");
    return 0;
}
