#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//const
int main(int argc, char *argv[])
{
	const int x = 10;		//const var is read-only variable
	//const int *p;		
	int const *p;			//equivalent to aboce statement	
	
	p = &x;					//value of p can be midfied
	*p = 30;				//value at *p is read-only
	
	fprintf(stdout, "x : %d\n", x);


	/*exit main */
	exit(0);
}

