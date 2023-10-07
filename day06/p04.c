#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	//declare variable
	float f;
	double d;

	while(fprintf(stdout, "\nd: "), fscanf(stdin, "%lf", &d), d != 0)
	{
		f = d;
		if(f == d)
		{
			fprintf(stdout, "i am not confused...");
		}
		else if (f < d)
		{
			fprintf(stdout, "i am  confused...");
		}
		else
		{
			fprintf(stdout, "i am really confused...");
		}
	}
	//exit main
	exit(0);
}
