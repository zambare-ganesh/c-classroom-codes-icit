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

	switch(month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			month_days = 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			month_days = 30;
			break;
		case 2:
			month_days = 28 +((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
			break;
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
