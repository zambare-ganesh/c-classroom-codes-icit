#include <stdio.h>
#include <stdlib.h>

//storage classes
int main(int argc, char *argv[])
{
	int i;

	for(i = 0; i < 10; ++i)
	{
		dummy();
	}
	//exit main
	exit(0);
}

void dummy()		//d is having auto storage class stack
{
	int x = 0;	//auto  stack
	static int p;		//data: comnpile time
	++x;
	++p;
	fprintf(stdout, "x: %d, p: %d\n", x, p);
}
