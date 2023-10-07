#include <stdio.h>
#include <stdlib.h>
#include "calender.h"

void print_cal(int month, int year);
int main(int argc, char *argv[])
{
	print_cal(6, 2016);
	//exit main
	exit(0);
}
void print_cal(int month, int year)
{
	int n = ndow(1, month, year);
	int mdays = month_days(month, year);
	int i;
	int day;

	fprintf(stdout, "SUN MON TUE WED THI FRI SAT\n");
	for(i = 0; i <n; ++i)
	{
		fprintf(stdout, "    ");
	}

	day = 1;
	while(day <= mdays)
	{
		fprintf(stdout, "%3d ", day);
		++i;
		++day;
		if(i % 7 == 0) 
			fprintf(stdout, "\n");
	}

}

/*
	print_dow(ndow(19, 1, 1969));
	fprintf(stdout, "\n");
	print_dow(ndow(19, 1, 1994));
	fprintf(stdout, "\n");
	print_dow(ndow(22, 8, 2016));
	fprintf(stdout, "\n");
*/
