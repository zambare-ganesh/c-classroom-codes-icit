#include <stdio.h>
#include <stdlib.h>

unsigned long long fact(int n);
unsigned long long sum(int n);

int main(int argc, char *argv[])
{
	int choice;
	int no;
	unsigned long long result;
	
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
				result = sum(no);
				break;
			case 2:
				result = fact(no);
				break;
			case 0:
				break;
			default:
				fprintf(stderr, "error: invalid choice...\n");
				continue;
		}
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

