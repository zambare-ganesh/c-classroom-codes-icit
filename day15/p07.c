#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//const
int main(int argc, char *argv[])
{
	const int x = 10;		//const var is read-only variable
	int *p = &x;
	//x = 30;	//error: assignment of read-only variable ‘x’
	*p = 30;
	fprintf(stdout, "x : %d\n", x);

	/*exit main */
	exit(0);
}

