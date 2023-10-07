#include <stdio.h>
#include <stdlib.h>

void modify(double *px);
int main(int argc, char *argv[])
{
	double x = 3.14;

	modify(&x);			//c do not support call by reference

	fprintf(stdout, "x : %lf\n", x);

	//exit main
	exit(0);
}

void modify(double *px)	//px is declared not *px
{
	*px = 2.7;
}
