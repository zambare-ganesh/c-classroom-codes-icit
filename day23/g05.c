#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	double *p;	
	int sz;

	sz = (char *)(p + 1) - (char *)p;

	//display size
	fprintf(stdout, "sz: %u\n", sz);

	//exit main
	exit(0);
}

