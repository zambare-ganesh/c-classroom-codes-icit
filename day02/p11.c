#include <stdio.h>
#include <stdlib.h>

//WAP max of 3 nos.
int main(int argc, char *argv[])
{

	double no;

	//input data
	fprintf(stdout, "no: ");
	fscanf(stdin, "%lf", &no);

	//check for +ve -ve 0
	if(no > 0) 
		fprintf(stdout, "no is +ve");
	else if(no < 0)
		fprintf(stdout, "no is -ve");
	else 
		fprintf(stdout, "no is 0");

	//exit main
	exit(0);
}

