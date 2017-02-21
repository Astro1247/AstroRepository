#include "stdafx.h"
#include <cstdlib>
#include <string>
#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

struct Date{
	int day;
	int month;
	int year;
};

/*
 *  Обьявить структуру, которая позволяет сохранять комплексное число
 *  Написать ф-цию позволяющую изменять комплексное число
 *  Написать ф-цию print которая выводит комплексное число в привычном для нас виде (2+5*int) (?)
 *  Написать ф-цию add принимающую 2 структуры и выдающую комплексное число которая является суммой тех двух
 */

bool isLeap(int year)
{
	if (year % 4 == 0 && (year / 100) % 4 == 0) return true;
	else return false;
}

int setDate(struct Date &date, int day, int month, int year)
{
	int maxDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (month == 2)
		if (isLeap(year)) maxDays[1] = 29; else maxDays[1] = 28;
	if (year < 0 || month < 1 || month > 12 || day < 1 || day > maxDays[month-1]) return 0;
	else
	{
		date.day = day;
		date.month = month;
		date.year = year;
	}
	return 1;

	/*if (year >= 0) date.year = year; 
	else return 1;
	if (month >= 1 || month <= 12) date.month = month;
	else return 1;
	if (day >= 1 || day <= 31) date.day = day;
	else return 1;
	return 0;*/
}

void getInput(int &day, int &month, int &year)
{
	cout << "Enter day: ";
	cin >> day;
	cout << "Enter month: ";
	cin >> month;
	cout << "Enter year: ";
	cin >> year;
}

int main()
{
	struct Date date;
	int day, month, year = {}, error = 0;
	bool manualInput = true;
	if (manualInput)
		cout << "Manual input enabled.\n";
	else
		cout << "Manual input disabled.\n";
	do
	{
		if (manualInput)
		{
			int choose;
			cout << "\nChoose date input type:\n 1. Manual input\n 2. System date\n 3. Default\nYour choise: ";
			cin >> choose;
			if (choose != 1 && choose != 2 && choose != 3)
			{
				error = 1;
				cout << "Error.\n";
				break;
			}
			switch (choose) {
			case 1:
			{
				getInput(day, month, year);
				error = 0;
				break;
			}
			case 2:
			{
				time_t     rawtime;
				struct tm* timeinfo;

				time(&rawtime);
				timeinfo = localtime(&rawtime);
				day = timeinfo->tm_mday;
				month = timeinfo->tm_mon + 1;
				year = timeinfo->tm_year + 1900;
				error = 0;
				break;
			}
			case 3:
			{
				error = 0;
				day = 1;
				month = 1;
				year = 2000;
				break;
			}
			}
		}
		else
		{
			day = 31;
			month = 9;
			year = 2017;
		}
		if (error == 0)
		if (setDate(date, day, month, year) == 0)
		{
			cout << "Input date incorrect.\n\n";
			error = 1;
		}
		else
		{
			cout << "Input date correct.\n";
			cout << "Current date: " << date.day << "." << setfill('0') << setw(2) << date.month << "." << date.year << "\n";
			error = 0;
		}
	} while (error == 1 && manualInput);
	system("pause");
	return 0;
}

