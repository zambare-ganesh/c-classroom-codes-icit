#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdlib.h>

//bitwise operators
//	|	bitwise or
//	&	bitwise &
//	^	bitwise xor
//	~	bitwise inversion (1s compliment)
//  <<  bitwise shift left
//  >> bitwise shift right
int main(int argc, char *argv[])
{
	int pos = 7;
	unsigned char mask = 1 << pos;
	char ch;


	//input data
	fprintf(stdout, "ch: ");
	fscanf(stdin, "%c", &ch);

	ch = ch | (1 << 5);
	fprintf(stdout, "ch: %c\n", ch);
	
	ch = ch & ~(1 << 5);
	fprintf(stdout, "ch: %c\n", ch);

	//exit main
	exit(0);
}
