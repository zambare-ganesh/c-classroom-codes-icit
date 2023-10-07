#include <stdio.h>
#include <stdlib.h>

//WAP max of 3 nos.
//short sr_hh, sr_mn, sr_sc;	//sunrise time	input
//short ss_hh, ss_mn, ss_sc;	//sunset time	input
//short dt_hh, dt_mn, dt_sc;	//daytime		output
//if sunset is less than sunrise report error

int main(int argc, char *argv[])
{
	char ch;

	//input data
	fprintf(stdout, "ch: ");
	fscanf(stdin, "%c", &ch);

	//check whether ch is uppercase or not
	//in future try to analyze how isupper is implemented 
	if(ch >= 'A')			//(ch >= 65)
	{
		if(ch <= 'Z')		//(ch <= 90)
		{
			fprintf(stdout, "%c is uppercase", ch);
		}
		else
		{
			fprintf(stdout, "%c is not uppercase", ch);
		}
	}
	else
	{
		fprintf(stdout, "%c is not uppercase", ch);
	}

	//exit main
	exit(0);
}

