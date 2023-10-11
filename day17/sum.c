#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int sum;

	sum = atoi(argv[1]) + atoi(argv[3]);
	//achieve the same using sscanf function

	fprintf(stdout, "sum: %d", sum);

	//exit main
	exit(0);

}

