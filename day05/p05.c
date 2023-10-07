#include <stdio.h>
#include <stdlib.h>

//Write a program to print fibonacci series
int main(int argc, char *argv[])
{
	//declare variables
	short n;					//input
	short i;
	unsigned long long f1;				
	unsigned long long f2;				
	unsigned long long f;				

	//input data
	fprintf(stdout, "n: ");
	fscanf(stdin, "%hd", &n);

	//process data and display results
	/*
	i = 0;				//initialization
	f1 = 1;				//initialization
	f2 = 1;				//initialization
	while(i < n)		//condition
	{
		f = f1 + f2;
		fprintf(stdout, "%Ld, ", f1);

		f1 = f2;		//modification
		f2 = f;			//modification
		++i;			//modification
	}
	*/
	/*
	for(expr_i1, exprei2, ...; expr_cond; expr_m1, expre_m2...)
	{
	}
	no expression is mandatory
	for(;;)		valid
	{
	}
	*/
	for(i = 0, f1 = 1, f2 = 1; i < n; ++i, f1 = f2, f2 = f)
	{
		f = f1 + f2;
		fprintf(stdout, "%Ld, ", f1);
	}

	fprintf(stdout, "\b\b ");
	//exit main
	exit(0);
}
