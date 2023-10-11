#include <stdio.h>
#include <stdlib.h>

//array on stack
int main(int argc, char *argv[])
{
	double pd[3];	//declare array on stack	
					//storage class auto
	int i;
	
	fprintf(stdout, "sizeof(pd)   : %d\n", sizeof(pd));
	fprintf(stdout, "sizeof(pd[0]): %d\n", sizeof(pd[0]));
	fprintf(stdout, "sizeof(pd[1]): %d\n", sizeof(pd[1]));
	fprintf(stdout, "sizeof(pd[2]): %d\n", sizeof(pd[2]));
	//exit main
	exit(0);
}

