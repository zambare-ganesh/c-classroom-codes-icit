#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int a[] = {10, 20, 30, 45, 60, 90};
	int *p = a ;
	//int *p;
	//p = &a[0];

	fprintf(stdout, "*p = %d\n", *p);
	p += 2;
	fprintf(stdout, "*p = %d\n", *p);
	*p++;
	fprintf(stdout, "*p = %d\n", *p);
	++*p;
	fprintf(stdout, "*p = %d\n", *p);
	*--p;
	fprintf(stdout, "*p = %d\n", *p);
	++p;
	fprintf(stdout, "*p = %d\n", *p);

	/*exit main */
	exit(0);
}


