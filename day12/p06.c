#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	double *pd;		// = NULL;	//NULL is predefined constant
	int i;
	int n;

	fprintf(stdout, "n: ");
	fscanf(stdin, "%d", &n);
	
	//alocate memory
	//pd = malloc(n * sizeof(double));	

	//free memory/deallocation
	free(pd);

	//exit main
	exit(0);
}
