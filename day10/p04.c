#include <stdio.h>
#include <stdlib.h>

void dummy()	;
int main(int argc, char *argv[])
{
	dummy();
	//exit main
	exit(0);
}

void dummy()	
{
	int x = 0;
	fprintf(stdout, "x: %d", x);
	dummy();
}
