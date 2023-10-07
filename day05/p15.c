#include <stdio.h>
#include <stdlib.h>

//Write a program to check whether given no is prime or not
int main(int argc, char *argv[])
{
	//declare variable
	//int range_from;		//input
	//int range_to;		//input
	int no;
	int val;
	int index;

	//input data
	/*
	fprintf(stdout, "from: ");
	fscanf(stdin, "%d", &range_from);
	fprintf(stdout, "to  : ");
	fscanf(stdin, "%d", &range_to);
	*/

	for(no = 1; no <= 10; ++no)
	{
		//print table for no
		for(index = 1; index <= 10; ++index)
		{
			fprintf(stdout, "%4d", index * no);
		}
		fprintf(stdout, "\n");
	}

	//process data

	//exit main
	exit(0);
}
