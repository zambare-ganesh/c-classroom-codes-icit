#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//const
int main(int argc, char *argv[])
{
	int x = 10;		//const var is read-only variable
	int * const p = &x;	//p is read only variable
	
	*p = 30;		//*p can be modified
	
	fprintf(stdout, "x : %d\n", x);


	/*exit main */
	exit(0);
}

