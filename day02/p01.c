#include <stdio.h>
#include <stdlib.h>

//four function calculator
//+ - * /

#define EDIVBYZ 1
#define EINVLOP 2
int main(int argc, char *argv[])
{
	double no1;			//input
	double no2;			//input
	char operator;		//input
	double result;		//output
	int errorno;		//output

	//input data
	fprintf(stdout, "no1: ");
	fscanf(stdin, "%lf", &no1);
	fprintf(stdout, "no2: ");
	fscanf(stdin, "%lf", &no2);
	fprintf(stdout, "op : ");
	fscanf(stdin, "%*c%c", &operator);

	//process data			//dont display anything in process data
	errorno = 0;				//assume no error
	if(operator == '+')
	{
		result = no1 + no2;
	}
	else if(operator == '-')
	{
		result = no1 - no2;
	}
	else if(operator == '*')
	{
		result = no1 * no2;
	}
	else if(operator == '/')
	{
		if(no2 == 0)
		{
			errorno = EDIVBYZ;
		}
		else
		{
			result = no1 / no2;
		}
	}
	else
	{
		errorno = EINVLOP;
	}

	//display results
	//errors: invalid operator, divide by zero
	//z = 0
	//fprintf(stdout, "%d", !z);
	if(!errorno)			//errorno == 0
	{
		fprintf(stdout, "%lf %c %lf = %lf", no1, operator, no2, result);
	}
	else if(errorno == EDIVBYZ)
	{
		fprintf(stderr, "error: divide by zero!!!");
	}
	else if(errorno == EINVLOP)
	{
		fprintf(stderr, "error: invalid operator!!!");
	}
	else
	{
		fprintf(stderr, "error: impossible. something went wrong!!!");
	}

	//exit main
	exit(0);
}

