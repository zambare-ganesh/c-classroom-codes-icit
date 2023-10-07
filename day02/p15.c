#include <stdio.h>
#include <stdlib.h>

//logical operator
//&& 	and
//|| 	or
//!		not
//will always produce 0 or 1 just like relational operators
//any nonzero value is treated as true
//zero is treated as false
//short circuit expression
//if first expression is false involved in && operation 2nd expression is not evaluated
//if first expression is true involved in || operation 2nd expression is not evaluated
int main(int argc, char *argv[])
{
	int x = 0;
	int y = -12;
	int z = 123;

	fprintf(stdout, "x: %d, y: %d, z: %d\n", x, y, z);
	z = x && ++y;			//short circuit expression
	fprintf(stdout, "x: %d, y: %d, z: %d\n", x, y, z);
	z = ++y && x;
	fprintf(stdout, "x: %d, y: %d, z: %d\n", x, y, z);

	z = ++x || ++y;			//short circuit expression
	fprintf(stdout, "x: %d, y: %d, z: %d\n", x, y, z);
	//exit main
	exit(0);
}

