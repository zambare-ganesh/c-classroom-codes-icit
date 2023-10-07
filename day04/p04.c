#include <stdio.h>
#include <stdlib.h>


//input a number n and print numkbers from 1..n
//input: 6
// 1 2 3 4 5 6

int main(int argc, char *argv[])
{
	int n;		//input
	int i;

	//input data
	fprintf(stdout, "n: ");
	fscanf(stdin, "%d", &n);

	//display numbers
	i = 1;						//intialization
	//START:		
	//if(i <= n)					//condition
	while(i <= n)
	{
		fprintf(stdout, "%d + ", i);
		++i;
		//goto START;
	}
	fprintf(stdout, "\b\b= ?");

	//exit main
	exit(0);
}
