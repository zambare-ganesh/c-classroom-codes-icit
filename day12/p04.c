#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	double *pd = 100;	//double *pd; pd = 100;							
	char *pc = 2000;							
	short *ph= 9000;


	*pd = 3124;			//*(100) = 3124
						//write value 3124 at memory location 100
	*pd = 33333333;
	pd = 900;
	*pd = 4.9;
	//size of pointer is 4 bytes for 32 bit compiler
	//size of pointer is 2 bytes for 16 bit compiler (turboc)
	//value of a pointer is supposed to be valid memory location.
	//it is programmers responsibilty to initialize pointer variable
	//with valid address.
	//uninitialized pointers may result into segmentation fault;
	fprintf(stdout, "pd: %u\n", pd);
	fprintf(stdout, "pc: %u\n", pc);
	fprintf(stdout, "ph: %u\n", ph);

	// p + n: value of p + n *sizeof(*p)
	// p - n: value of p - n *sizeof(*p)
	fprintf(stdout, "pd + 1: %u\n", pd + 1);
	fprintf(stdout, "pc + 1: %u\n", pc + 1);
	fprintf(stdout, "ph + 1: %u\n", ph + 1);
	
	fprintf(stdout, "pd + 2: %u\n", pd + 2);
	fprintf(stdout, "pc + 2: %u\n", pc + 2);
	fprintf(stdout, "ph + 2: %u\n", ph + 2);

	//exit main
	exit(0);
}
