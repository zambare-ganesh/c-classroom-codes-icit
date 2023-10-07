#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdlib.h>

//arithmetic operators 01
//binary : +, -, *, /, %
//unary  : ++, -- (prefix/postfix)
int main(int argc, char *argv[])
{
	int x;
	int y;
	int z;

	x = -12;
	y = 5;

	z = x + y;
	fprintf(stdout, "x: %d, y = %d, z = x + y: %d\n", x, y, z);
	z = x - y;
	fprintf(stdout, "x: %d, y = %d, z = x - y: %d\n", x, y, z);
	z = x * y;
	fprintf(stdout, "x: %d, y = %d, z = x * y: %d\n", x, y, z);
	z = x / y;
	fprintf(stdout, "x: %d, y = %d, z = x / y: %d\n", x, y, z);
	z = x % y;
	fprintf(stdout, "x: %d, y = %d, z= x %% y: %d\n", x, y, z);

	//exit main
	exit(0);
}
