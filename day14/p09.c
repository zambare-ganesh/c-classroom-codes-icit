#include <stdio.h>
#include <stdlib.h>

void print_name(char *name, int length);
void scan_name(char *name, int length);
void copy_name(char *other, char *name);

int main(int argc, char *argv[])
{
	char name[128];
	char other[128];
	
	scan_name(name, 128);
	print_name(name, 128);
	copy_name(other, name);	//copy contents of name to other
	print_name(other, 128);

	/*exit main */
	exit(0);
}

void print_name(char *name, int length)
{
	int i;
	//for(i = 0; i < length; ++i)
	fprintf(stdout, "\n");
	for(i = 0; name[i] != '\n'; ++i)
	{
		fprintf(stdout, "%c", name[i]);
	}
}


void scan_name(char *name, int length)
{
	int i;
	fprintf(stdout, "name: ");
	i = 0;
	do
	{
		fscanf(stdin, "%c", &name[i]);
		++i;
	}while(name[i-1] != '\n');
}

void copy_name(char *dest, char *src)
{
	int i;
	for(i = 0; src[i] != '\n'; ++i)
	{
		dest[i] = src[i];
	}
	dest[i] = '\n';
}




