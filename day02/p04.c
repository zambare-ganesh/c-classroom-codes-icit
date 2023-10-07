#include <stdio.h>
#include <stdlib.h>

//comma operator
int main(int argc, char *argv[])
{
	int x = 10;
	int y;

	y = (++x, x++, x++);
	fprintf(stdout, "x: %d, y: %d\n", x, y);
	//study order of evaluation(precedence).
	//comma operator has lowest precedence
	//comma operation is sequential evaluation from left to right
	//comma expression in bracket represents right most expression

	//exit main
	exit(0);
}
