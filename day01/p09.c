#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdlib.h>

//relational operators
//==, !=, <, <=, >, >=
//relational operaors are evaluated as true or false.
//false corresponds to integer value 0
//true corresponds to any nonzero integer value 
//in case of evaluation of relational and logical operator true is 1
int main(int argc, char *argv[])
{
	int x;
	int y;
	int z;

	x = 12;
	y = 5;
	z = (x == y);
	fprintf(stdout, "x: %d, y: %d, z = (x == y):%d\n", x, y, z);
	z = (x != y);
	fprintf(stdout, "x: %d, y: %d, z = (x != y):%d\n", x, y, z);
	z = (x < y);
	fprintf(stdout, "x: %d, y: %d, z = (x < y):%d\n", x, y, z);
	//check other operators

	//exit main
	exit(0);
}
