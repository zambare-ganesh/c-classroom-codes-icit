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

void dummy(int);
int main(int argc, char *argv[])
{
	auto int x = 10;//auto: visible in function main only. 
	auto int y = 30;//auto: visible in function main only. 
	int z;			//auto: visible in function main only.
	register int x;	//register variable
	
	//we can have bnested block but nested functions are not supported in C.
	{
		int x = 20;	//auto: visible within this block only.
		fprintf(stdout, "main: x: %d, y: %d, z: %d\n", x, y, z);
	}
	dummy(60);
	fprintf(stdout, "main: x: %d, y: %d, z: %d\n", x, y, z);
	
	//exit main
	exit(0);
}

//formal parameters are auto variables dclared in function definition.
void dummy(int z)	//z is also auto: visible in dummy function only
{
	auto int x = 33;//auto: visible in function dummy only. 
	int y = 99;		//auto: visible in function dummy only. 
	fprintf(stdout, "dummy: x: %d, y: %d, z: %d\n", x, y, z);
}

