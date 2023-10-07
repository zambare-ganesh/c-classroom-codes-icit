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

	x = 12;
	y = 5;
	z = 10;
	fprintf(stdout, "x: %d, y = %d, z = %d\n", x, y, z);
	++x;
	y++;
	--z;
	fprintf(stdout, "x: %d, y = %d, z = %d\n", x, y, z);
	z = ++x;	//x = x + 1; //prefix operation
				//z = x;
	y = x++;	//y = x;
				//x = x + 1; //postfix
	fprintf(stdout, "x: %d, y = %d, z = %d\n", x, y, z);
	//exit main
	exit(0);
}
