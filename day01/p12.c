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
	char val = 1 << 7;	//45;	//1;
	int pos = 0;

	//for shift of signed operand sign is retained
	//val >> pos: val / pow(2, pos)
	fprintf(stdout, "%d >> %d = %d\n", val, pos, val >> pos);
	++pos;
	fprintf(stdout, "%d >> %d = %d\n", val, pos, val >> pos);
	++pos;
	fprintf(stdout, "%d >> %d = %d\n", val, pos, val >> pos);
	++pos;
	fprintf(stdout, "%d >> %d = %d\n", val, pos, val >> pos);
	++pos;
	fprintf(stdout, "%d >> %d = %d\n", val, pos, val >> pos);
	++pos;
	fprintf(stdout, "%d >> %d = %d\n", val, pos, val >> pos);
	++pos;
	fprintf(stdout, "%d >> %d = %d\n", val, pos, val >> pos);
	++pos;
	fprintf(stdout, "%d >> %d = %d\n", val, pos, val >> pos);
	++pos;
	fprintf(stdout, "%d >> %d = %d\n", val, pos, val >> pos);

	//exit main
	exit(0);
}
