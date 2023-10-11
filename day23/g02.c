#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	double *p1;	
	double *p2;	
	int sz;

	p1 = 1000;
	p2 = p1 + 1;
	sz = p2 - p1;

	//display size
	fprintf(stdout, "p1: %u, p1: %u, sz: %u\n", p1, p2, sz);

	//exit main
	exit(0);
}

