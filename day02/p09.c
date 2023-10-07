#include <stdio.h>
#include <stdlib.h>

//WAP max of 3 nos.
int main(int argc, char *argv[])
{

	short no1;		//input
	short no2;		//input
	short no3;		//input
	short max;		//output

	//input data
	fprintf(stdout, "enter 3 nos: ");
	fscanf(stdin, "%hd%hd%hd", &no1, &no2, &no3);

	//process data
	if(no1 > no2)
	{
		max = no1;
	}
	else 
	{
		max = no2;
	}

	if(no3 > max)
	{
		max = no3;
	}

	//display results
	fprintf(stdout, "max: %hd", max);

	//exit main
	exit(0);
}

