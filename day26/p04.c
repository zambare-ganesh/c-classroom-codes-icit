#include <stdio.h>
#include <stdlib.h>

unsigned long long square(int n);
unsigned long long cube(int n);

//int *px[10]		//array of integer pointers
//int (*px)[10];	//ponter to an array of 10 integers
//int f()			//f is a function returnig an integer 
//int (*f)()		// f is a pointer

typedef unsigned long long (*operation) (int);		
//operation type represents a function pointer

void scan_array(int *, int n);
void print_array(int *, int n);
int cmp_int(const void *, const void *);
int main(int argc, char *argv[])
{
	int a[9];

	scan_array(&a[0], sizeof(a)/sizeof(a[0]));
	print_array(&a[0], 9);
	qsort(&a[0], 9, sizeof(a[0]), cmp_int);
	print_array(&a[0], 9);
	//exit main
	exit(0);
}

void scan_array(int *a, int n)
{
	int i;
	for(i = 0; i < n; ++i)
	{
		a[i] = rand() % 100 + 1;
	}
}
void print_array(int *a, int n)
{
	int i;
	for(i = 0; i < n; ++i)
	{
		fprintf(stdout, "%d, ", a[i]);
	}
	fprintf(stdout, "\b\b \n");
}

int cmp_int(const void *pv1, const void *pv2)
{
	int *p1 = (int *)pv1;
	int *p2 = (int *)pv2;

	return (*p1 - *p2);
}
