#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i;

	for(i = 0; i < argc; ++i)
	{
		fprintf(stdout, "argv[%d]: %s\n", i, argv[i]);
	}

	//exit main
	exit(0);

}

