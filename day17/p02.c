#include <stdio.h>
#include <stdlib.h>

//one dimensional arrays on stack
int length = 10;		//data section
//short garr[length];	error: variably modified ‘garr’ at file scope
//variable length arrays can not have static or extern scope.
short garr[10];			//data secction.
						//uninitialized extern, static arrays are 
						//on bss(google longform for bss)
						//default values are zero
int main(int argc, char *argv[])
{
	short autoarr[length];	//array on stack. default values are garbage.
							//c89 doesnt support variable length arrays.
							//C99 gives C programmers the ability to use 
							//variable length arrays, which are arrays 
							//whose sizes are not known until run time.
							//ignoring for the moment array parameters 
							//in functions, a variable length array must
							//be declared at block scope and must not be 
							//static or extern.
}

