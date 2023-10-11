#include <stdio.h>
#include <stdlib.h>

/*
A union is a variable that may hold (at different times) 
objects of different types and sizes, with the compiler 
keeping track of size and alignment requirements. 
Unions provide a way to manipulate different kinds of data 
in a single area of storage, without embedding any machine-
dependent information in the program.

note: all union members share same space.
*/
typedef struct {
	unsigned char day:8;
	unsigned char month:8;
	unsigned short year:16;
}sdate;

typedef union{
	sdate d;
	int ndate ;
} date;

int main(int argc, char *argv[])
{
	date dob;
	/*
	dob.d.day = 26;
	dob.d.month = 8;
	dob.d.year = 1994;
	*/
	dob.ndate = 130680858;
	fprintf(stdout, "sizeof(dob): %d\n", sizeof(dob)); 
	fprintf(stdout, "dob: %02u-%02u-%04u : %u\n", dob.d.day, dob.d.month, 
												  dob.d.year, dob.ndate);

	//exit main
	exit(0);
}
