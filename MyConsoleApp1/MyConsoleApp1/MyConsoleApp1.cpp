#include "stdafx.h"
#include <cstdlib>
#include <string>

using namespace std;

struct Date{
	int day;
	int month;
	int year;
};

int setDate(struct Date &date, int day, int month, int year)
{
	int maxDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
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
	printf("Enter day: ");
	scanf("%i", &day);
	printf("Enter month: ");
	scanf("%i", &month);
	printf("Enter year: ");
	scanf("%i", &year);
	getchar();
}

int main()
{
	struct Date date;
	int day, month, year = {};
	bool manualInput = true;
	if (manualInput)
		getInput(day, month, year);
	else
	{
		day = 31;
		month = 9;
		year = 2017;
	}
	if (setDate(date, day, month, year) == 0)
		printf("Input date incorrect.\n");
	else
	{
		printf("Input date correct.\n");
		printf("Current date: %0.2d.%0.2d.%0.4d\n", date.day, date.month, date.year);
	}
	system("pause");
	return 0;
}

