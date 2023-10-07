#include <stdio.h>
#include <stdlib.h>

//storage classes:	specifies where varaibles are stored 
//					and variables scope and lifetime.
//					c99
//run time variables: memory location of these variables is decided
//			: at run time. they are destroyed at the end of block
//			: where they are defined.
//			: default value is undefined (garbage value).
//			: should be defined at the start of block.
//			: c99 alloows to define these variables anywhere inside the block.
// auto		: auto variables are created on stack.
//			: they are visible within the block where they are defined.
//			: formal parameters are also auto variables.
//			: when auto variables are created stack grows.
//			: auto is default storage class within a block.
//			: stack shrinks at the end of block and auto variables are destroyed.
// register	: register variables are also run time variables.
//			: traditionaly they are stored in cpu registers.
//			: the c standard says register variables should be located 
//			: in available fastest access memory area.
//			: it may be cpu register, cache memory.
//			: if fastes access memory is not available, they are 
//			: just auto varaibles
//			: register variables are usually used as counters.
//compile time variables: the memory location is decided at compile time.
//			: their life ends when the process exits.
//			: they are located in data section.
//			: default value is zero.
// static	: static variables are visible inside the block or module
//			: where they are defined. they retain value after end of
//			: block
// extern	: extern variables (referred as global variables)
//			: they are visible across all modules in the program.
//			: extern variables are defined once but can be declared
//			: multiple times.
//			: avoid use o extern or static unless and other wise required.
//			: above statement may be false in some contexts.

//functions : have default extern scope.
//			: to hide the function from other modules use static keyword.

double calc_avg(double runs, int matches);
int main(int argc, char *argv[])
{
	double runs = 10.0;			//input
	int matches = 0;			//input
	double avg;					//output
	int error;					//output

	//process data
	error = 0;
	if(matches <= 0)
	{
		error = 1;
	}
	else
	{
		avg = runs/matches;
	}


	//display results
	if(!error)
	{
		fprintf(stdout, "avg: %lf", avg);
	}
	//exit main
	exit(0);
}

double calc_avg(double runs, int matches)
{
	return 0.0;
}


