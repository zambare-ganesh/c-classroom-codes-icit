#include <stdio.h>
#include <stdlib.h>

//do mistakes. learn through mistakes and dont repeat mistakes.
//learn to learn how to learn.
int main(int argc, char *argv[])
{
	//declare variable
	int range_from;		//input
	int range_to;		//input
	int no;
	int val;
	int index;

	//input data
	fprintf(stdout, "from: ");
	fscanf(stdin, "%d", &range_from);
	fprintf(stdout, "to  : ");
	fscanf(stdin, "%d", &range_to);

	for(index = 1; index <= 10; ++index)
	{
		for(no = range_from; no <= range_to; ++no)
		{
			fprintf(stdout, "%4d", index * no);
		}
		fprintf(stdout, "\n");
	}

	//process data

	//exit main
	exit(0);
}
