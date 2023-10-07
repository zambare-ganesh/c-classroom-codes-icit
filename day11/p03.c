#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int n;			//input
	int i;
	int j;

	//get value of n from user
	fprintf(stdout, "n: ");
	fscanf(stdin, "%d", &n);

	//display value of n
	fprintf(stdout, "n: %d\n", n);

	i = 0;
	j = n -1;
	//while(i != j)
	while(i < j)
	{
		fprintf(stdout, "%d\t%d\n", i, j);
		++i;
		--j;
	}

	//exit main
	exit(0);;
}
