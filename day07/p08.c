#include <stdio.h>
#include <stdlib.h>

//write a function end print nos between range
void print_nos(short start, short end);	
int main(int argc, char *argv[])
{
	short int start;
	short int end;

	//input data
	fprintf(stdout, "start: ");
	fscanf(stdin, "%hd", &start);
	fprintf(stdout, "end  : ");
	fscanf(stdin, "%hd", &end);

	//
	print_nos(start, end);	

	//exit main
	exit(0);
}


void print_nos(short start, short end)
{
	short i;
	
	//fprintf(stdout, "i want to print nos between %d...%d\n", start, end);
	if(start <= end)
	{
		for(i = start; i <= end; ++i)
		{
			fprintf(stdout, "%hd", i);
		}
	}
	else
	{
		for(i = start; i >= end; --i)
		{
			fprintf(stdout, "%hd", i);
		}
	}
	/*
	while(start <= end)
	{
		fprintf(stdout, "%hd", start);
		++start;
	}
	*/
}

