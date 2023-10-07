#include <stdio.h>
#include <stdlib.h>

//month days for given month and year

#define EINMNTH 1

int main(int argc, char *argv[])
{
	short day, month, year;	//input
	short julian_day;		//output
	int errorno;			//output

	//input data
	fprintf(stdout, "date(d/m/y):");
	fscanf(stdin, "%hd%hd%hd", &day, &month, &year);

	//proces data
	errorno = 0;			//no error
	julian_day = day;
	
	switch(month)
	{
		case 12:
			julian_day += 30;
		case 11:
			julian_day += 31;
		case 10:
			julian_day += 30;
		case 9:
			julian_day += 31;
		case 8:
			julian_day += 31;
		case 7:
			julian_day += 30;
		case 6:
			julian_day += 31;
		case 5:
			julian_day += 30;
		case 4:
			julian_day += 31;
		case 3:
			julian_day += 28 +((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
		case 2:
			julian_day += 31;
		default:
			errorno = EINMNTH;
	}

	//display results
	if(!errorno)
	{
		fprintf(stdout, "month days: %hd", month_days);
	}
	else if(errorno == EINMNTH)
	{
		fprintf(stderr, "error: invalid month");
	}

	//exit main
	exit(0);
}
