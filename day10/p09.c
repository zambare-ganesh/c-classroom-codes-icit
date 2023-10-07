#include <stdio.h>
#include <stdlib.h>

int i = 0;
int main(int argc, char *argv[])
{
	auto i = 1;
	fprintf(stdout, "%d\n", i);			//1
	{
		int i = 2;
		fprintf(stdout, "%d\n", i);		//2
		{
			i += 1;
			fprintf(stdout, "%d\n", i);	//3
		}
		fprintf(stdout, "%d\n", i);		//2
	}
	fprintf(stdout, "%d", i);			//1
	//exit main
	exit(0);
}
