#include <stdio.h>
#include <stdlib.h>

void print_array(char *arr, int length);

int main(int argc, char *argv[])
{
	char arr[6] = {'A', 'd', 'C', 'l', 'Z', 't'};
	
	print_array(arr, 6);

	/*exit main */
	exit(0);
}

void print_array(char *arr, int length)
{
	int i;
	for(i = 0; i < length; ++i)
	{
		fprintf(stdout, "&arr[%d]: %u, arr[%d]: %c\n", i, &arr[i], i, arr[i]);
	}
}


