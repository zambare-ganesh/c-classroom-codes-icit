#include <stdio.h>
#include <stdlib.h>

//array on stack
int main(int argc, char *argv[])
{
	//double pd[3];
	//double pd[3] = {3.14, 2.7, 100.0};
	//double pd[3] = {3.14, 2.7, 100.0, 99.0};	
	//check above across various compilers 
	//double pd[3] = {3.14}; 
	//partial iinitialization will intialize rest of elements to zero
	double pd[3] = {}; 
	int i;
	
	fprintf(stdout, "sizeof(pd)   : %d\n", sizeof(pd));
	fprintf(stdout, "sizeof(pd[0]): %d\n", sizeof(pd[0]));
	fprintf(stdout, "sizeof(pd[1]): %d\n", sizeof(pd[1]));
	fprintf(stdout, "sizeof(pd[2]): %d\n", sizeof(pd[2]));

	fprintf(stdout, "&i    : %u\n", &i);
	fprintf(stdout, "pd    : %u\n", &pd);
	fprintf(stdout, "&pd[0]: %u\n", &pd[0]);
	fprintf(stdout, "&pd[1]: %u\n", &pd[1]);
	fprintf(stdout, "&pd[2]: %u\n", &pd[2]);

	for(i = 0; i < 3; ++i)
	{
		fprintf(stdout, "*(pd + %d) : %lf\n", i, *(pd + i));
	}
	//exit main
	exit(0);
}

