#include <stdio.h>
#include <stdlib.h>

void show_bits(unsigned char no);

int main(int argc, char *argv[])
{
	//declare variable
	int nrows;				//no of rows
	int n;
	int r;
	unsigned long long bc;
	unsigned long long nfact;
	unsigned long long rfact;
	unsigned long long nmrfact;

	int i;

	//print pascal triangle
	while(fprintf(stdout, "\nnrows: "), fscanf(stdin, "%d", &nrows), nrows > 0)
	{
		for(n = 0; n < nrows; ++n)
		{
			fprintf(stdout, "\n");
			//put spaces at the start of each row
			for(i = 1; i <= (nrows -n); ++i)
			{
				fprintf(stdout, "   ");
			}

			//print bc
			for(r = 0; r <= n; ++r)
			{
				//calculate binomial coefficient
			
				//calculate nfact
				nfact = 1;
				for(i = 1; i <= n; ++i)
				{
					nfact *= i;
				}

				//calculate rfact
				rfact = 1;
				i = 1;
				while(i <= r)
				{
					rfact = rfact * i;
					++i;
				}
				
				//calculate nmrfact
				nmrfact = 1;
				i = 1;
				START:
					if(i <= (n - r))
					{
						nmrfact *= i;
						++i;
						goto START;
					}

				bc = nfact / (rfact * nmrfact);

				fprintf(stdout, "%6Lu", bc);
			}
		}
	}

	//exit main
	exit(0);
}
