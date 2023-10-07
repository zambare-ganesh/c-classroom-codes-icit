#include <stdio.h>
#include <stdlib.h>

static int r;		//data: comnpile time
double d;			//data: compile time
//storage classes
int main(int argc, char *argv[])
{
	int x;	//auto	stack
	int y;	//auto	stack
	register int z;		//possibly cpu register
	static int p;		//compile time

	fprintf(stdout, "x: %d, r: %d, d: %lf\n", x, r, d);
	//exit main
	exit(0);
}

void dummy(int d)		//d is having auto storage class stack
{
	int x;	//auto  stack
	static int p;		//data: comnpile time
	static int q;		//data: comnpile time
}
