//write a function to calculate factorial of given no
#include <stdio.h>
#include <stdlib.h>

//function declaration/prototype
//unsigned long long calculate_factorial(short);	//also valid
unsigned long long calculate_factorial(short no);	
int main(int argc, char *argv[])
{
	//declare variables
	short no;						//input
	unsigned long long factorial;   //output	

	//input data
	fprintf(stdout, "no: ");
	fscanf(stdin, "%hd", &no);

	//process data
	factorial = calculate_factorial(no);	//function call
											//no is actual parameter
	//display result
	fprintf(stdout, "factorial(%hd): %Lu", no, factorial);

	//exit main
	exit(0);
}

//function definition. implimentation
unsigned long long calculate_factorial(short no)	//no is formal parameter
{
	unsigned long long fact = 1;	//output variable
	short i;

	for(i = 1; i <= no; ++i)
	{
		fact *= i;
	}
	return fact;
}

