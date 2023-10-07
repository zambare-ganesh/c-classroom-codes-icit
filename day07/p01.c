#include <stdio.h>
#include <stdlib.h>

//write a function end print nos between range
void print_primes(short n);
int check_prime(short no);
int main(int argc, char *argv[])
{
	short int n;
	//input data
	fprintf(stdout, "n: ");
	fscanf(stdin, "%hd", &n);

	//print pattern
	//print_primes(n);

	//exit main
	exit(0);
}

void print_primes(short n)
{
	short no;
	
	fprintf(stdout, "i want to print prime  nos between %d...%d\n", 1, n);
	for(no = 1; no <= n; ++no)
	{
		if(check_prime(no) && check_prime(no + 2)) //no is prime and no + 2 is prime
		{
			fprintf(stdout, "%d, %d\n", no, no + 2);
		}
	}
}


int check_prime(short no)
{
	int i;
	int is_prime;

	for(i = 2, is_prime = 1; i < no; ++i)
	{
		if(no % i == 0)
		{
			is_prime = 0;
			break;
		}
	}
	return is_prime;
}
