//write a function to calculate factorial of given no
#include <stdio.h>
#include <stdlib.h>

//default storage class of variables declared in block is auto
//variables declared in block has block scope 
//they die (get destroyed) at the end of block

//function declaration/prototype
//short calculate_sum(short, short);
short calculate_sum(short ankush, short abhijeet);
//short calculate_sum(short no1, short no2);
int main(int argc, char *argv[])
{
	//while writing main function
	//declare only input and output variable
	//declare variables
	auto short no1 = 10;			//input
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
//no1, no2 are formal parameter
//short calculate_sum(short no1, short no2)	
//short calculate_sum(short n1, short n2)	
short calculate_sum(short no1, short no2)	
{
	short sum;	//output variable

	//process data
	sum = no1 + no2;

	return sum;
}

