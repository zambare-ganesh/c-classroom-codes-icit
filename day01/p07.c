#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdlib.h>

//arithmetic operators 01
//binary : +, -, *, /, %
//unary  : ++, -- (prefix/postfix)
int main(int argc, char *argv[])
{
	double x;
	double y;
	double z;

	x = 12.3;
	y = 5.2;

	z = x + y;
	fprintf(stdout, "x: %lf, y = %lf, z = x + y: %lf\n", x, y, z);
	z = x - y;
	fprintf(stdout, "x: %lf, y = %lf, z = x - y: %lf\n", x, y, z);
	z = x * y;
	fprintf(stdout, "x: %lf, y = %lf, z = x * y: %lf\n", x, y, z);
	z = x / y;
	fprintf(stdout, "x: %lf, y = %lf, z = x / y: %lf\n", x, y, z);
	//z = x % y; //% operator is not valid for floatinmg data
	//fprintf(stdout, "x: %lf, y = %lf, z= x %% y: %lf\n", x, y, z);

	//exit main
	exit(0);
}
