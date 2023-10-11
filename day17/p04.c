#include <stdio.h>
#include <stdlib.h>

static const char *sdays[7] = {
	"sunday", "monday", "tuesday", "wednesday", "thirsday", "friday", "saturday"
};

static const int daytab[2][13] = 
	{
		{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
		{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
	};	//in c arrays are row based.
int monthdays(int month, int year);
int julianday(int day, int month, int year);
int ndow(int day, int month, int year);
int main(int argc, char *argv[])
{
	fprintf(stdout, "day of week: %s\n", sdays[ndow(10, 11, 1993)]);
	//exit main
	exit(0);

}

int monthdays(int month, int year)
{
	return daytab[(year % 4 == 0 && year % 100 != 0) || year % 400 == 0][month];
}

int julianday(int day, int month, int year)
{
	int m;
	int jd = day;

	for(m = 1; m < month; ++m)
	{
		jd += monthdays(m, year);
	}
	return jd;
}

int ndow(int day, int month, int year)
{
	int odd = julianday(day, month, year);
	--year;					//prvious year
	year %= 400;			//400 years: 0 odd days
	odd += year /100 * 5;	//100 years: 5 odd days
	year %= 100;
	odd += year + year/4;	//every year: 1 odd + leap year: extra odd day
	return odd % 7;
}
