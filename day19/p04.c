#include <stdio.h>
#include <stdlib.h>

typedef unsigned short uint16;		//uint16 is new type

int main(int argc, char *argv[])
{
	uint16 x = 10;

	fprintf(stdout, "x: %hd", x);

	//exit main
	exit(0);
}

