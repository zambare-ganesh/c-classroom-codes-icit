#include <stdio.h>
#include <stdlib.h>


//input a number n and print numkbers from 1..n
//input: 6
// 1 2 3 4 5 6
void dummy(int n)
{
	int i, j, k;
	for(i = 0; i<= n; ++i) for(j = 0; j<= n; ++j) for(k = 0; k<= n; ++k);
}
int main(int argc, char *argv[])
{
	int no;		//input
	int bit;
	int nbits = sizeof(no) * 8;

	//input data
	fprintf(stderr, "no: ");
	fscanf(stdin, "%d", &no);

	//process data
	//fprintf(stderr, "1234567890123456789012345678901234567890\n");
	fprintf(stderr, "%*s", nbits, "x");
	while(nbits)
	{
		bit = no % 2;
		fprintf(stderr, "\b");
		dummy(450);
		fprintf(stderr, "%d", bit);
		dummy(450);
		fprintf(stderr, "\b");

		
		no /= 2;
		--nbits;
	}

	//exit main
	exit(0);
}
