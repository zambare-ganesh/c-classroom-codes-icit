#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int x;
	int *p = &x;
	//int *p;
	//p = &x;
	*p = 10;

	fprintf(stdout, "x  = %d\n", x);
	fprintf(stdout, "*p = %d\n", *p);
	/*exit main */
	exit(0);
}


