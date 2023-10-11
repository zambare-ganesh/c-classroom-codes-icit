#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//malloc : allocates memory. memory contents are not initialized.
//calloc : allocates memory and initalizes it with value 0.
void scan_names(char *pnames[], int length);
void print_names(char *pnames[], int length);

int main(int argc, char *argv[])
{
	char *pnames[3];	//array of char pointer
	int i;

	//alocate memory
	for(i = 0; i < 3; ++i)
	{
		pnames[i] = malloc(128 * sizeof(char));
		fprintf(stdout, "panames[%d]: %p\n", i, pnames[i]);
	}
	
	//scan names
	scan_names(pnames, 3);
	print_names(pnames, 3);

	//free memory
	for(i = 0; i < 3; ++i)
	{
		free(pnames[i]);
	}
	/*exit main */
	exit(0);
}

void scan_names(char *pnames[], int length)
{
	int i;
	for(i = 0; i < 3; ++i)
	{
		fprintf(stdout, "pnames[%d]: ", i);
		fscanf(stdin, "%s", pnames[i]);
	}

}

void print_names(char *pnames[], int length)
{
	int i;
	for(i = 0; i < 3; ++i)
	{
		fprintf(stdout, "%s\n", pnames[i]);
	}

}

