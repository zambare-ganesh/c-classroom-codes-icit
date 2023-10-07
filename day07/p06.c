//write a function to calculate factorial of given no
#include <stdio.h>
#include <stdlib.h>

short f1(short ankush, short abhijeet);
//short f1(short no1, short no2);
int main(int argc, char *argv[])
{
	short x = 1;
	short y = 2;

	fprintf(stdout, "main: &x:%u, &y: %u\n", &x, &y);
 	f1(x, y);	
	fprintf(stdout, "main: &x:%u, &y: %u\n", &x, &y);

	//exit main
	exit(0);
}

short f1(short x, short y)	
{
	x = 10;
	y = 20;
	fprintf(stdout, "f1: &x:%u, &y: %u\n", &x, &y);
	return 100;
}

