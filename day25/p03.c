#include <stdio.h>
#include <stdlib.h>

/*
A union is a variable that may hold (at different times) 
objects of different types and sizes, with the compiler 
keeping track of size and alignment requirements. 
Unions provide a way to manipulate different kinds of data 
in a single area of storage, without embedding any machine-
dependent information in the program
*/
union demounion
{
	char ch[2];
	double d;
	short x;
	double *pd;
	char p;
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
	union demounion u;

	u.x = 513;

	//fprintf(stdout, "dob: %02u-%02u-%04u : %u\n", dob.day, dob.month, 
	//											  dob.year, dton(dob));

	//fprintf(stdout, "u.x: %hd, u.ch[0], u.ch[1]\n", dob.day, dob.month, 
	fprintf(stdout, "sizeof(u): %d\n", sizeof(u)); 
	//exit main
	exit(0);
}
unsigned dton(date d)
{
	return d.year << 16 | d.month << 8 | d.day;
}
