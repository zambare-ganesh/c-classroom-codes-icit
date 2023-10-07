#include <stdio.h>
#include <stdlib.h>


//input a number n and print numkbers from 1..n
//input: 6
// 1 2 3 4 5 6

int main(int argc, char *argv[])
{
	int no;		//input
	int bit;

	//input data
	fprintf(stdout, "no: ");
	fscanf(stdin, "%d", &no);

	//process data
	while(no != 0)
	{
		bit = no % 2;
		fprintf(stdout, "%d", bit);
		
		no /= 2;
	}

	//exit main
	exit(0);
}
