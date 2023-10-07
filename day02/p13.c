#include <stdio.h>
#include <stdlib.h>

//WAP max of 3 nos.
//short sr_hh, sr_mn, sr_sc;	//sunrise time	input
//short ss_hh, ss_mn, ss_sc;	//sunset time	input
//short dt_hh, dt_mn, dt_sc;	//daytime		output
//if sunset is less than sunrise report error

int main(int argc, char *argv[])
{
	char ch;		//input
	int is_digit;	//output
	int no;

	//input data
	fprintf(stdout, "ch: ");
	fscanf(stdin, "%c", &ch);

	//process data
	is_digit = 0;
	if(ch >= '0')			//(ch >= 48)
	{
		if(ch <= '9')		//(ch <= 57)
		{
			is_digit = 1;
			no = ch -'0';	//ch - 48
		}
	}

	//display results
	if(is_digit)
	{
		fprintf(stdout, "%c is a digit, equivalent no: %d ", ch, no);
	}
	else
	{
		fprintf(stdout, "%c is not a digit", ch);
	}
	
	//exit main
	exit(0);
}

