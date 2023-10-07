//write a function to calculate factorial of given no
#include <stdio.h>
#include <stdlib.h>

//function declaration/prototype
//short calculate_sum(short, short);
short calculate_sum(short ankush, short abhijeet);
//short calculate_sum(short no1, short no2);
int main(int argc, char *argv[])
{
	//declare variables
	short no1 = 10;					//input
	short no2 = 20;					//input
	short sum;						//output

	//process data
	sum = calculate_sum(no1, no2);	//function call
									//no1 is actual parameter
	//display result
	fprintf(stdout, "calculate_sum(%hd, %hd): %hd", no1, no2, sum);

	//exit main
	exit(0);
}

//function definition. implimentation
//no1, no2are is formal parameter
//short calculate_sum(short no1, short no2)	
short calculate_sum(short n1, short n2)	
{
	short sum;	//output variable

	//process data
	//sum = no1 + no2;
	sum = n1 + n2;

	return sum;
}

