#include <stdio.h>
#include <stdlib.h>

//logical operator
//&& 	and
//|| 	or
//!		not
//will always produce 0 or 1 just like relational operators
//any nonzero value is treated as true
//zero is treated as false
int main(int argc, char *argv[])
{
	int x = 10;
	int y = -12;
	int z = 0;


	fprintf(stdout, "x && y : %d\n", x && y);
	fprintf(stdout, "x && z : %d\n", x && z);

	fprintf(stdout, "x || y : %d\n", x || y);
	fprintf(stdout, "x || z : %d\n", x || z);
	
	fprintf(stdout, "!x: %d, !y: %d, !z: %d\n", !x, !y, !z);
	//exit main
	exit(0);
}

