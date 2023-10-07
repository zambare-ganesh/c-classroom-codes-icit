#include <stdio.h>
//gcc p01.c -o p01 -lm
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
	//declare variable
	double degrees;				//input
	double radian;
	
	double sum;					//output
	double sign;
	double term;
	double term1;
	double term2;
	
	int n;
	int i;
	int j;

	//print pascal tridegrees
	while(fprintf(stdout, "\ndegrees: "), fscanf(stdin, "%lf", &degrees), degrees >= 0)
	{
		fprintf(stdout, "\nn      : ");
		fscanf(stdin, "%d", &n);
		
		radian = M_PI/180.0 * degrees;
		fprintf(stdout, "sin(%lf): %lf\n", radian, sin(radian));


		for(i = 0, sum = 0; i < n; ++i)
		{
			sign = (i % 2)? -1: +1;
			
			term1 = 1;
			for(j = 1; j <= 2 * i + 1; ++j)
			{
				term1 *= j;
			}

			term2 = 1;
			for(j = 1; j <= 2 * i + 1; ++j)
			{
				term2 *= radian;
			}
			term = sign/term1 * term2;
			sum += term;
			fprintf(stdout, "%d, %lf, %lf\n", i, term, sum);
		}

	}

	//exit main
	exit(0);
}





