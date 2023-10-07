#include <stdio.h>
#include <stdlib.h>

//print given no in binary format
int main(int argc, char *argv[])
{
	//declare variable
	unsigned long no;			//input
	int bytes = sizeof(no);
	int bits = bytes * 8;
	unsigned long mask = 1LU << (bits - 1);


	fprintf(stdout, "\nno: ");
	fscanf(stdin, "%lu", &no);

	while(mask)
	{
		//fprintf(stdout, "mask: %10lu\t%10lu\t%d\n", mask, mask & no, (mask & no) > 0);

		if((mask & no) > 0)
		{
			fprintf(stdout, "1");
		}
		else
		{
			fprintf(stdout, "0");
		}
		mask >>= 1;
	}

	//exit main
	exit(0);
}
