#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	//declare variable
	float x;
	unsigned long no;
	unsigned long mask = 1LU;
	int bytes = sizeof(no);
	int bits = bytes * 8;

	while(fprintf(stdout, "\nx: "), fscanf(stdin, "%f", &x), x != 0)
	{
		no = *((unsigned long *)&x);
		//process data
		int pos = 0;
		mask = 1LU;
		mask <<= (bits - 1);
		while(mask)
		{
			fprintf(stdout, "%d", (mask & no) > 0);
			mask >>= 1;
			++pos;
			if(pos == 1 || pos == 9)
			{
				fprintf(stdout, " ");
			}
		}
		fprintf(stdout, "\ns exponent significand");
	}
	//exit main
	exit(0);
}
