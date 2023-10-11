#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
	unsigned char day;
	unsigned char month;
	unsigned short year;
}Sdate;

typedef union
{
	Sdate date;
	unsigned ndate;
}date;
//all members share same memory in union.
//sizeof widest member is size of union union.
int main(int argc, char *argv[])
{
	date dob1 = {19, 1, 1969};	//ganesh
	date dob2 = {26, 8, 1994};	//mainak
	fprintf(stdout, "%u, %02u-%02u-%04u\n", dob1.ndate, 
				dob1.date.day, dob1.date.month, dob1.date.year);
	fprintf(stdout, "%u, %02u-%02u-%04u\n", dob2.ndate, 
				dob2.date.day, dob2.date.month, dob2.date.year);

	if(dob1.ndate > dob2.ndate)
	{
		fprintf(stdout, "ganesh is youngest\n");
	}
	else
	{
		fprintf(stdout, "mainak is youngest\n");
	}
	//exit main
	exit(0);
}
