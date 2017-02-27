#include "stdafx.h"
#include "date.h"
#include "iostream"

void date::print()
{
	day = this->day;
	month = this->month;
	year = this->year;
	int maxDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (month == 2)
		if (isLeap(year)) maxDays[1] = 29; else maxDays[1] = 28;
	if (year < 0 || month < 1 || month > 12 || day < 1 || day > maxDays[month - 1]) printf("Incorrect date!\n");
	else printf("%0.2d.%0.2d.%0.4d\n", day, month, year);
}

void date::getInput(int &day, int &month, int &year)
{
	printf("Enter day: ");
	scanf("%i", &day);
	printf("Enter month: ");
	scanf("%i", &month);
	printf("Enter year: ");
	scanf("%i", &year);
	getchar();
}

bool date::isLeap(int year)
{
	if (year % 4 == 0 && (year / 100) % 4 == 0) return true;
	else return false;
}

int date::setDate(int day, int month, int year)
{
	int maxDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (month == 2)
		if (isLeap(year)) maxDays[1] = 29; else maxDays[1] = 28;
	if (year < 0 || month < 1 || month > 12 || day < 1 || day > maxDays[month - 1]) return 0;
	else
	{
		this->day = day;
		this->month = month;
		this->year = year;
	}
	return 1;

}