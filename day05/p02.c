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
	i = 0;
	f1 = 1;
	f2 = 1;
	fprintf(stdout, "%Ld, %Ld, ", f1, f2);
	while(i < n - 1)
	{
		f = f1 + f2;
		fprintf(stdout, "%Ld, ", f);

		f1 = f2;
		f2 = f;
		++i;
	}
	fprintf(stdout, "\b\b ");
	//exit main
	exit(0);
}
