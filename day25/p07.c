#include <stdio.h>
#include <stdlib.h>

unsigned long long fact(int n);
unsigned long long sum(int n);

//int *px[10]		//array of integer pointers
//int (*px)[10];	//ponter to an array of 10 integers
//int f()			//f is a function returnig an integer 
//int (*f)()		// f is a pointer

typedef unsigned long long (*operation) (int);		
//operation type represents a function pointer

int main(int argc, char *argv[])
{
	int choice;
	int no;
	unsigned long long result;
	operation op;
	
	//fprintf(stdout, "main: %u\n", main);
	//fprintf(stdout, "fact: %u\n", fact);
	//fprintf(stdout, "sum : %u\n", sum);
	//fprintf(stdout, "\nno: ");
	//fscanf(stdin, "%d", &no);
	no = 5;
	do
	{
		fprintf(stdout, "1. sum\n");
		fprintf(stdout, "2. fact\n");
		fprintf(stdout, "enter choice: ");
		fscanf(stdin, "%d", &choice);
		result = -1;
		switch(choice)
		{
			case 1:
				op = sum;
				break;
			case 2:
				op = fact;
				break;
			case 0:
				break;
			default:
				fprintf(stderr, "error: invalid choice...\n");
				continue;
		}
		result = op(no);
		fprintf(stdout, "result: %Lu\n", result);
	}while(choice != 0);
	//exit main
	exit(0);
}


unsigned long long fact(int n)
{
	unsigned long long f = 1;
	while(n)
	{
		f *= n;
		n--;
	}
	return f;
}

unsigned long long sum(int n)
{
	unsigned long long s = 0;
	while(n)
	{
		s += n;
		n--;
	}
	return s;
}

