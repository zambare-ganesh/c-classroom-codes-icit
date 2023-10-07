#include <stdio.h>
#include <stdlib.h>


void showbits(int x);
int main(int argc, char *argv[])
{
	int x;		//input
	int pos;	//input
	unsigned int mask;
	//int y;	//output

	//get value of n from user
	while(fprintf(stdout, "\nx: "), fscanf(stdin, "%d", &x), x)
	{
		showbits(x);
		fprintf(stdout, "pos: ");
		fscanf(stdin, "%d", &pos);
		mask = 1 << pos;
		showbits(x);
		showbits(mask);
		showbits(x & mask);		//testbit: x & (1 << pos)
		x = x | mask;			//setbit : x = x | (1 << pos)
		showbits(x);
		mask = ~(1 << pos);
		showbits(mask);
		x = x & mask;
		showbits(x);			//resetbit: x = x & ~(1 << pos)

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

