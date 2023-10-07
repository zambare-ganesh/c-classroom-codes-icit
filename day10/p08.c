#include <stdio.h>
#include <stdlib.h>

void dummy(int x, int y);
int main(int argc, char *argv[])
{
	//dummy(1);
	dummy(10, 20);

	//exit main
	exit(0);
}

void dummy(int x, int y)	
{
	fprintf(stdout, "x: %d\n", x);
	++x;
	if( x < y)
	{
		dummy(x, y);
	}

}
