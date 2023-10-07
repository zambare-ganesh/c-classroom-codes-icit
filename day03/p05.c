#include <stdio.h>
#include <stdlib.h>

//month days for given month and year

#define EINMNTH 1

int main(int argc, char *argv[])
{
	short month;			//input
	short year;				//input
	short  month_days;		//output
	int errorno;			//output

	//input data
	fprintf(stdout, "month: ");
	fscanf(stdin, "%hd", &month);
	fprintf(stdout, "year : ");
	fscanf(stdin, "%hd", &year);

	//proces data
	errorno = 0;			//no error

	if(month < 1 || month > 12)
		errorno = EINMNTH;
	else if(month == 2)
			month_days = 28 +((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
	else if(month < 8)
		month_days = 30 + month % 2;
	else
		month_days = 31 - month % 2;

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
