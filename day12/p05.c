#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	double *pd = NULL;	//NULL is predefined constant
	char *pc = NULL;	//initialize with some valid address
	short *ph= NULL;	//or NULL
	int i;

	//fprintf(stdout, "NULL:  %u\n", NULL);
	pd = malloc(3 * sizeof(double));	

	fprintf(stdout, "pd + 0: %u\n", pd + 0);
	fprintf(stdout, "pd + 1: %u\n", pd + 1);
	fprintf(stdout, "pd + 2: %u\n", pd + 2);

	//write some values at allocated memory locations
	//display the values in forward order
	//display the values in reverse order
	//calculate sum of the values
	//accept the values from user instead of hardcoded 
	//or values generated by formula
	//instead of 3 allocate for 10 values


	//exit main
	exit(0);
}
