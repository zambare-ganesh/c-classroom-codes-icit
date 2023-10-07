#include <stdio.h>
#include <stdlib.h>


void showbits(int x);

//rewrite the logic using function
//using bitwise operators print following series
//	1 2 4 8 16 32 64 128
//	128 64 32 16 8 4 2 1
int main(int argc, char *argv[])
{
	int x;		//input
	int i;
	int j;
	int y;		//output
	unsigned int mask;
	//int y;	//output

	//get value of n from user
	while(fprintf(stdout, "\nx: "), fscanf(stdin, "%d", &x), x)
	{
		showbits(x);
		i = 31;
		j = 0;
		y = 0;
		while(i >= 0)
		{
			//showbits(1 << i);
			//showbits(1 << j);
			if(x & (1 << i))
			{
				y |= (1 << j);
			}
			--i;
			++j;
		}
		showbits(y);
	}


	//exit main
	exit(0);;
}

void showbits(int no)
{
	int bytes = sizeof(no);
	int bits = bytes * 8;
	unsigned int mask = 1u << (bits - 1);

	while(mask)
	{
		fprintf(stdout, "%d", (mask & no) > 0);
		mask >>= 1;
	}
	fprintf(stdout, "\n");
}

