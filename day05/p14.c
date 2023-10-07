#include <stdio.h>
#include <stdlib.h>

//Write a program to check whether given no is prime or not
int main(int argc, char *argv[])
{
	//declare variable
	int range_from;		//input
	int range_to;		//input
	int is_prime;		//output
	int no;
	int div;

	//input data
	fprintf(stdout, "from: ");
	fscanf(stdin, "%d", &range_from);
	fprintf(stdout, "to  : ");
	fscanf(stdin, "%d", &range_to);

	//process data
	int last_prime = 2;
	for(no = range_from; no <= range_to; ++no)
	{
		//process to check whether no is prime or not
		for(div = 2, is_prime = 1; div <= no/2; ++div)
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
			if(no - last_prime == 2)
			{
				fprintf(stdout, "%d - %d\n", last_prime, no);
			}
			last_prime = no;
		}
	}
	fprintf(stdout, "\b\b ");

	//exit main
	exit(0);
}
