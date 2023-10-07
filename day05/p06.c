#include <stdio.h>
#include <stdlib.h>

//Write a program to print fibonacci series
int main(int argc, char *argv[])
{
	/*
	for(;;)	//infinite loop (forever)
	{
		fprintf(stdout, "*");
	}
	*/
	/*
	for(; fprintf(stdout, "*");)
	{
	}
	*/
	/*
	for(; fprintf(stdout, "0");)
	{
	}
	*/
	for(; fprintf(stdout, "\0");)
	{
	}
	fprintf(stdout, "exiting main");
	//exit main
	exit(0);
}
