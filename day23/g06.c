#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	double *p = NULL;	
	int sz;

	sz = (char *)(p + 1) - (char *)p;

	//display size
	fprintf(stdout, "p: %u, p + 1: %u, sz: %u\n", p, p +1, sz);

	//exit main
	exit(0);
}

