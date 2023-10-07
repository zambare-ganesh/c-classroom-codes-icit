#include <stdio.h>
#include <stdlib.h>

//month days for given month and year

#define EINMNTH 1

int main(int argc, char *argv[])
{
	short day, month, year;	//input
	short ndow;				//output
	int errorno;			//output

	//input data
	fprintf(stdout, "date(d/m/y):");
	fscanf(stdin, "%hd%hd%hd", &day, &month, &year);

	//proces data
	errorno = 0;			//no error
	ndow = day;
	
	switch(month)
	{
		case 12:
			ndow += 30;
		case 11:
			ndow += 31;
		case 10:
			ndow += 30;
		case 9:
			ndow += 31;
		case 8:
			ndow += 31;
		case 7:
			ndow += 30;
		case 6:
			ndow += 31;
		case 5:
			ndow += 30;
		case 4:
			ndow += 31;
		case 3:
			ndow += 28 +((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
		case 2:
			ndow += 31;
		case 1:
			break;
		default:
			errorno = EINMNTH;
			goto END;
	}
	//-------------------------------
	int y;			
	y = year - 1;
	y %= 400;
	
	ndow += y/100 * 5;
	y %= 100;
	ndow += y + y /4;
	//---------------------------------

	//display results
END:
	if(!errorno)
	{
		ndow %= 7;
		fprintf(stdout, "day of week: %hd\n", ndow);
		switch(ndow)
		{
			case 0: fprintf(stdout, "Sunday"); break;
			case 1: fprintf(stdout, "monday"); break;
			case 2: fprintf(stdout, "tuesday"); break;
			case 3: fprintf(stdout, "wednesday"); break;
			case 4: fprintf(stdout, "thirsday"); break;
			case 5: fprintf(stdout, "friday"); break;
			case 6: fprintf(stdout, "Saturday"); break;
		}
	}
	else if(errorno == EINMNTH)
	{
		fprintf(stderr, "error: invalid month");
	}
	//exit main
	exit(0);
}
