#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	short x = 512;
	unsigned char *pc;
	short *ps;
	double *pd;

	fprintf(stdout, "sizeof(pc) : %d, sizeof(*pc): %d\n", sizeof(pc), sizeof(*pc));
	fprintf(stdout, "sizeof(ps) : %d, sizeof(*ps): %d\n", sizeof(ps), sizeof(*ps));
	fprintf(stdout, "sizeof(pd) : %d, sizeof(*pd): %d\n", sizeof(pd), sizeof(*pd));

	ps = &x;
	fprintf(stdout, "x  : %hd\n", x);
	fprintf(stdout, "*ps: %hd\n", *ps);
	//pc = &x;	//warning: assignment from incompatible pointer type [enabled by default]
	pc = (unsigned char *)&x;		
	fprintf(stdout, "*pc: %u\n", *ps);
	fprintf(stdout, "*(pc + 0): %u, *(pc + 1): %u\n", *(pc + 0), *(pc + 1));
	fprintf(stdout, "    pc[0]: %u,     pc[1]: %u\n", pc[0], pc[1]);


	int t = 1;
	char *pt = (char *) &t;
	if(pt[0] == 1)
	{
		fprintf(stdout, "hey this is little endian...");
	}
	else
	{
		fprintf(stdout, "hey this is big endian...");
	}
	//exit main
	exit(0);
}


