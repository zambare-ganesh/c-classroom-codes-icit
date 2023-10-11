#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	double *p1;	
	double *p2;	

	p1 = 1000;
	p2 = p1 + 1;

	fprintf(stdout, "p1: %u, p1: %u, p2 - p1: %u\n", p1, p2, p2 - p1);

	//exit main
	exit(0);
}

