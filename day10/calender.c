#include <stdio.h>
#include "calender.h"

int is_leap(int year)
{
	return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}

int month_days(int month, int year)
{
	int days = -1;
	if(month == 2)
		days = 28 + is_leap(year);
	else if (month < 8)
		days = 30 + month % 2;
	else if (month <= 12)
		days = 31 - month % 2;
	return days;
}


int julian_day(int day, int month, int year)
{
	int jday = day;
	int m;
	if(day <= 0 || day > month_days(month, year))
	{
		return -1;
	}
	for(m = 1; m < month; ++m)
		jday += month_days(m, year);
	return jday;
}

int ndow(int day, int month, int year)
{
	int odd = julian_day(day, month, year);

	if(odd == -1)
		return -1;
	--year;
	year %= 400;
	odd += year/100 * 5;
	year %= 100;
	odd += year + year / 4;

	return odd % 7;
}

void print_dow(int odd)
{
	switch(odd)
	{
		case SUN:
			fprintf(stdout, "sunday");
			break;
		case MON:
			fprintf(stdout, "monday");
			break;
		case TUE:
			fprintf(stdout, "tuesday");
			break;
		case WED:
			fprintf(stdout, "wednesday");
			break;
		case THI:
			fprintf(stdout, "thirsday");
			break;
		case FRD:
			fprintf(stdout, "friday");
			break;
		case SAT:
			fprintf(stdout, "saturday");
			break;
	}
}
