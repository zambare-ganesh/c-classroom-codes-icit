#include <stdio.h>
#include <stdlib.h>

//one dimensional arrays on stack
int main(int argc, char *argv[])
{
	short nstudents;
	short *prollnos = NULL;

	//input length of array
	fprintf(stdout, "no of students: ");
	fscanf(stdin, "%hd", &students);	//assume use enters 3 for diagram

	//allocate memory on heap for one dimensional array

	//free memory
	if(prollnos != NULL)
	{
		free(prollnos);
		prollnos = NULL;
	}
	//exit main
	exit(0);

}

