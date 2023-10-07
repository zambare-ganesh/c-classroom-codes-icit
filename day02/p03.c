#include <stdio.h>
#include <stdlib.h>

//sizeof operator
int main(int argc, char *argv[])
{
	int x = 10;

	fprintf(stdout, "x: %d\n", x);
	fprintf(stdout, "sizeof(x): %d\n", sizeof(x));
	fprintf(stdout, "sizeof(++x): %d\n", sizeof(++x));
	fprintf(stdout, "sizeof(x = x + 1): %d\n", sizeof(x = x + 1));
	fprintf(stdout, "x: %d\n", x);
	//size of is a compile time operator.
	//it only checks size of expression at compile time.
	//the expression is never executed
	//exit main
	exit(0);
}
