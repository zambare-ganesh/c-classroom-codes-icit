#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	double *p1;	
	double *p2;	
	char *cp1;
	char *cp2;
	int sz;

	p1 = 1000;
	p2 = p1 + 1;


	sz = p2 - p1;

	fprintf(stdout, "p1: %u, p2: %u, sz: %u\n", p1, p2, sz);
	cp1 = p1;
	cp2 = p2;
	sz = cp2 - cp1;


	//display size
	fprintf(stdout, "cp1: %u, cp2: %u, sz: %u\n", cp1, cp2, sz);

	//exit main
	exit(0);
}

