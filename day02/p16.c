#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int year;		//input
	int is_leap;	//output

	//input date
	fprintf(stdout, "year: ");
	fscanf(stdin, "%d", &year);

	//process data
	is_leap = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));

	//display results
	if(is_leap)
	{
		fprintf(stdout, "%d is a leap year", year);
	}
	else
	{
		fprintf(stdout, "%d is not a leap year", year);
	}

	//exit main
	exit(0);
}

