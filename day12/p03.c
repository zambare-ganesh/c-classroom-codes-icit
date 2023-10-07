#include <stdio.h>
#include <stdlib.h>

//four function calculator
//+ - * /

#define EDIVBYZ 1
#define EINVLOP 2

int main(int argc, char *argv[])
{
	double *pd;							
	char *pc;							
	short *ph;

	//size of pointer is 4 bytes for 32 bit compiler
	//size of pointer is 2 bytes for 16 bit compiler (turboc)
	//value of a pointer is supposed to be valid memory location.
	//it is programmers responsibilty to initialize pointer variable
	//with valid address.
	//uninitialized pointers may result into segmentation fault;
	fprintf(stdout, "sizeof(pd): %d\n", sizeof(pd));
	fprintf(stdout, "sizeof(pc): %d\n", sizeof(pc));
	fprintf(stdout, "sizeof(ph): %d\n", sizeof(ph));

	//exit main
	exit(0);
}
