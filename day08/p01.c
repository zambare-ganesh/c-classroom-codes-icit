#include <stdio.h>
#include <stdlib.h>

unsigned long long factorial(int n);
long long sum1ton(int n);
int sumofdigits(int n);
int reverse(int n);
int generate_pal(int n);
int is_pal(int n);

int main(int argc, char *argv[])
{
	int n;						//input
	unsigned long long f;		//output
	long long sumn;				//output
	int sumd;					//output
	int rev;					//output
	int pal;					//ouput

	//input data
	fprintf(stdout, "n: ");
	fscanf(stdin, "%d", &n);

	//
	//f = factorial(n);
	//sumn = sum1ton(n);
	//sumd = sumofdigits(n);
	//rev = reverse(n);
	pal = generate_pal(n);

	//display results
	//fprintf(stdout, "factorial: %Lu\n", f);
	//fprintf(stdout, "sum 1..%d: %Ld\n", n, sumn);
	//fprintf(stdout, "sum of digits: %d\n", sumd);
	//fprintf(stdout, "rev:  %d\n", rev);
	fprintf(stdout, "pal:  %d\n", pal);


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
int generate_pal(int n)
{
	while(!is_pal(n)) 	//no is not pailindrome
	{
		//add reverse of number to the number
		fprintf(stdout, "%d\t%d\t", n, reverse(n));
		n += reverse(n);
		fprintf(stdout, "%d\n", n);
	}
	return n;
}
int is_pal(int n)
{
	return (n == reverse(n));
}
