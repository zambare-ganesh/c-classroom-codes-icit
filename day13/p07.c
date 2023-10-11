#include <stdio.h>
#include <stdlib.h>

//array on stack
int main(int argc, char *argv[])
{
	double pd[] = {3.14, 2.7, 100.0, 1.6, 3.3};
	//in this case size of pd will be determined by compiler.
	int i;
	
	fprintf(stdout, "&i    : %u\n", &i);
	fprintf(stdout, "pd    : %u\n", &pd);
	fprintf(stdout, "&pd[0]: %u\n", &pd[0]);
	fprintf(stdout, "&pd[1]: %u\n", &pd[1]);
	fprintf(stdout, "&pd[2]: %u\n", &pd[2]);

	//for(i = 0; i < sizeof(pd)/sizeof(double); ++i)
	for(i = 0; i < sizeof(pd)/sizeof(pd[0]); ++i)
	{
		fprintf(stdout, "*(pd + %d) : %lf\n", i, *(pd + i));
	}
	//exit main
	exit(0);
}

