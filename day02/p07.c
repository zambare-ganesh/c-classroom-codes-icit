#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

	int x = fprintf(stdout, "hello\n");
	fprintf(stdout, "x : %d", x);
	//exit main
	exit(0);
}

