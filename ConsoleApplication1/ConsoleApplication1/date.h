#pragma once
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
};

