#include <stdio.h>
#include <stdlib.h>

//type cast and implicit conversion
//wap to input runs and matches. calculate average.
int main(int argc, char *argv[])
{
	int runs;		//input
	short matches;	//input
	double average;	//output

	//input data
	fprintf(stdout, "runs   : ");
	fscanf(stdin, "%d", &runs);
	fprintf(stdout, "matches: ");
	fscanf(stdin, "%hd", &matches);

	//process data
	//average = runs/matches;
	//average = (double)runs/matches;
	average = 1.0 * runs/matches;

	//display results
	//fprintf(stdout, "average: %lf", average);
	fprintf(stdout, "average: %3.2lf", average);

	//exit main
	exit(0);
}
/*
IF an operand is a long double
THEN the second is converted to long double
ELSE IF an operand is a double
THEN the second is converted to double
ELSE IF an operand is a float
THEN the second is converted to float
ELSE IF an operand is an unsigned long
THEN the second is converted to unsigned long
ELSE IF an operand is long
THEN the second is converted to long
ELSE IF an operand is unsigned int
THEN the second is converted to unsigned int
-------------------------------------------------------------------
There is one additional special case: If one operand is 
long and the other is unsigned int, 
and if the value of the unsigned int cannot be represented by a long, 
both operands are converted to unsigned long.
-------------------------------------------------------------------
*/
