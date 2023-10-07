#include <stdio.h>
#include <stdlib.h>

unsigned long long factorial(int n);
long long sum1ton(int n);
int sumofdigits(int n);
int reverse(int n);

int main(int argc, char *argv[])
{
	int n;
	unsigned long long f;
	long long sumn;
	int sumd;
	int rev;

	//input data
	fprintf(stdout, "n: ");
	fscanf(stdin, "%d", &n);

	//
	//f = factorial(n);
	//sumn = sum1ton(n);
	//sumd = sumofdigits(n);
	rev = reverse(n);

	//display results
	//fprintf(stdout, "factorial: %Lu\n", f);
	//fprintf(stdout, "sum 1..%d: %Ld\n", n, sumn);
	//fprintf(stdout, "sum of digits: %d\n", sumd);
	fprintf(stdout, "rev:  %d\n", rev);


	//exit main
	exit(0);
}

unsigned long long factorial(int n)
{
	unsigned long long fact;
	int i;

	fact = 1;
	i = 1;
	while(i <= n)
	{
		fact *= i;
		++i;
	}

	return fact;
}

long long sum1ton(int n)
{
	int usen;
	int bolt;

	for(bolt = 0, usen = 1; usen <= n; ++usen)
	{
		bolt += usen;
	}
	return bolt;
}

int sumofdigits(int no)
{
	int sum = 0;
	int digit;
	
	while(no != 0)
	{
		digit = no % 10;
		sum += digit;

		no /= 10;
	}
	return sum;
}

int reverse(int no)
{
	int rev = 0;
	int digit;
	
	while(no != 0)
	{
		digit = no % 10;
		rev *= 10;
		rev += digit;

		no /= 10;
	}
	return rev;
}

//we are learing
//lear to learn how to learn
