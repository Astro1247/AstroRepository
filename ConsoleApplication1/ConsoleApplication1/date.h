#pragma once
#include <ctime>

class date
{
public:
	int day;
	int month;
	int year;
	void print();
	bool isLeap(int year);
	int setDate(int day, int month, int year);
	void getInput(int &day, int &month, int &year);
	date()
	{
		time_t t = time(NULL);
		struct tm tm = *localtime(&t);
		day = tm.tm_mday;
		month = tm.tm_mon + 1;
		year = tm.tm_year + 1900;
	}
	date(int cday, int cmonth, int cyear)
	{
		day = cday;
		month = cmonth;
		year = cyear;
	}
};

