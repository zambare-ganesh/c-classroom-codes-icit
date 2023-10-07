#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdlib.h>

//bitwise operators
//	|	bitwise or
//	&	bitwise &
//	^	bitwise xor
//	~	bitwise inversion (1s compliment)
int main(int argc, char *argv[])
{
	int x;
	int y;
	int z;

	x = 12;
	y = 5;
	z = (x | y);
	fprintf(stdout, "x: %d, y: %d, z = (x | y):%d\n", x, y, z);
	z = (x & y);
	fprintf(stdout, "x: %d, y: %d, z = (x & y):%d\n", x, y, z);
	z = (x ^ y);
	fprintf(stdout, "x: %d, y: %d, z = (x ^ y):%d\n", x, y, z);
	fprintf(stdout, "~x: %d, ~y: %d, ~z:%d\n", ~x, ~y, ~z);
	//check other operators

	//exit main
	exit(0);
}
