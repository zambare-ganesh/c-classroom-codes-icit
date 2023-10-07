#include <stdio.h>
#include <stdlib.h>

void modify(double x);
int main(int argc, char *argv[])
{
	double x = 3.14;

	modify(x);

	fprintf(stdout, "x : %lf\n", x);

	//exit main
	exit(0);
}

void modify(double x)
{
	x = 2.7;
}
