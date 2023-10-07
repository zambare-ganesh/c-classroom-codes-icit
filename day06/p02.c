#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	//declare variable
	unsigned long no;
	unsigned long mask = 1LU;
	int bytes = sizeof(no);
	int bits = bytes * 8;

	while(fprintf(stdout, "\nno: "), fscanf(stdin, "%lu", &no), no != 0)
	{
		//process data
		mask = 1LU;
		mask <<= (bits - 1);
		while(mask)
		{
			fprintf(stdout, "%d", (mask & no) > 0);
			mask >>= 1;
		}
	}
	//exit main
	exit(0);
}
