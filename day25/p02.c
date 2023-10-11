#include <stdio.h>
#include <stdlib.h>

union demounion
{
};


typedef struct{
	unsigned char day;
	unsigned char month;
	unsigned short year;
}date;

unsigned dton(date d);
int main(int argc, char *argv[])
{
	date dob = {26, 8, 1994};

	fprintf(stdout, "dob: %02u-%02u-%04u : %u\n", dob.day, dob.month, 
												  dob.year, dton(dob));

	//exit main
	exit(0);
}
unsigned dton(date d)
{
	return d.year << 16 | d.month << 8 | d.day;
}
