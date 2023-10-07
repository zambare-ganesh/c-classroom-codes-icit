#include <stdio.h>
#include <stdlib.h>


//input a number n and print numkbers from 1..n
//input: 6
// 1 2 3 4 5 6

int main(int argc, char *argv[])
{
	int n;		//input
	int i;
	int mul;

	//input data
	fprintf(stdout, "n: ");
	fscanf(stdin, "%d", &n);

	//process data
	i = 1;						//intialization
	mul = 1;
	while(i <= n)
	{
		fprintf(stdout, "%d * ", i);
		mul = mul * i;
	
		++i;
	}

	//display results
	fprintf(stdout, "\b\b= %d", mul);

	//exit main
	exit(0);
}
