#include <stdio.h>
#include <stdlib.h>

//four function calculator
//+ - * /

#define EDIVBYZ 1
#define EINVLOP 2

int calculator(double no1, double no2, char op, double *presult);

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
	errorno = calculator(no1, no2, operator, &result);

	//display results
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

int calculator(double no1, double no2, char operator, double *presult)
{
	int errorno = 0;				//assume no error
	switch(operator)
	{
		case '+': *presult = no1 + no2; break;
		case '-': *presult = no1 - no2; break;
		case '*': *presult = no1 * no2; break;
		case '/': 
			if(no2 == 0)
			{
				errorno = EDIVBYZ;
			}
			else
			{
				*presult = no1 / no2;
			}
			break;
		deafult: 
			errorno = EINVLOP;
			break;			//not mandatory
	}
	return errorno;
}
