#include <stdio.h>
#include <stdlib.h>

void print_array(char *ca, int length);

int main(int argc, char *argv[])
{
	char ca[6] = {'A', 'd', 'C', 'l', 'Z', 't'};
	
	print_array(ca, 6);

	/*exit main */
	exit(0);
}

void print_array(char *ca, int length)
{
	int i;
	for(i = 0; i < length; ++i)
	{
		fprintf(stdout, "&ca[%d]: %u, ca[%d]: %c\n", i, &ca[i], i, ca[i]);
	}
}
