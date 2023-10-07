#include <stdio.h>
#include <stdlib.h>

/* bracket notation to access array elements
*	*(pd + i)	: 	pd[i]
*	 (pd + i)	:	&pd[i]
*/
void scan_elements(double *pd, int n);

int main(int argc, char *argv[])
{
	double *pd = NULL;	//NULL is predefined constant
	int i;
	int n;

	fprintf(stdout, "n: ");
	fscanf(stdin, "%d", &n);
	
	//alocate memory
	pd = malloc(n * sizeof(double));	

	//scan elements
	scan_elements(pd, n);		//pass address of first element and length of array

	//impement function print_elements
	for(i = 0; i < n; ++i)
	{
		//fprintf(stdout, "element %d: %lf\n", i, *(pd + i));
		fprintf(stdout, "element %d: %lf\n", i, pd[i]);
	}

	//free memory/deallocation
	if(pd != NULL)		
	{
		free(pd);
		pd = NULL;
	}

	//exit main
	exit(0);
}

void scan_elements(double *pd, int n)
{
	int i;

	for(i = 0; i < n; ++i)
	{
		fprintf(stdout, "element %d: ", i);
		fscanf(stdin, "%lf", &pd[i]);
		//fprintf(stdout, "%lf\n", (double)rand()/RAND_MAX * 100);
		//*(pd + i) = (double)rand()/RAND_MAX * 100;
		//pd[i] = (double)rand()/RAND_MAX * 100;

	}
}	
