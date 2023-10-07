#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
	double x = 3.14;
	double *px;	//which var is declared here px or *px
	//here we have declared variable named px.
	
	//& : address operator		&x: address of x
	//* : indirection operator	*px: value at px

	px = &x;
	fprintf(stdout, "x: %lf, *px: %lf, &x: %u, px: %u, &px: %u", x, *px, &x, px, &px);
	*px = 2.7;
	fprintf(stdout, "x: %lf, *px: %lf, &x: %u, px: %u, &px: %u", x, *px, &x, px, &px);

	//exit main
	exit(0);
}

