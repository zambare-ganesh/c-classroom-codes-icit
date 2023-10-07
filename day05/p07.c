#include <stdio.h>
#include <stdlib.h>

//Write a program to check whether given no is prime or not
int main(int argc, char *argv[])
{
	//declare variable
	int no;				//input
	int is_prime;		//output
	int div;

	//input data
	fprintf(stdout, "no: ");
	fscanf(stdin, "%d", &no);

	//process data
	for(div = 2, is_prime = 1; div < no/2; ++div)
	{
		if(no % div == 0)
		{
			is_prime = 0;
			break;			//come out of loop
		}
	}

	//display results
	if(is_prime)
	{
		fprintf(stdout, "%d is a prime no", no);
	}
	else
	{
		fprintf(stdout, "%d is not a prime no", no);
	}

	//exit main
	exit(0);
}
