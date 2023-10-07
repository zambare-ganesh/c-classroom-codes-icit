#include <stdio.h>
#include <stdlib.h>

void dummy(int x);
int main(int argc, char *argv[])
{
	//dummy(1);
	dummy(0);

	//exit main
	exit(0);
}

void dummy(int x)	
{
	++x;
	fprintf(stdout, "x: %d\n", x);
	if( x < 10)
	{
		dummy(x);
	}

}
