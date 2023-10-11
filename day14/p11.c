#include <stdio.h>
#include <stdlib.h>

void print_name(char *name);
void scan_name(char *name);
void str_cpy(char *other, char *name);

int main(int argc, char *argv[])
{
	char name[128] = "ABC";	//{'A', 'B', 'C', '\0'};
	char other[128];
	
	//scan_name(name);
	fprintf(stdout, "name: ");
	fscanf(stdin, "%s", name);
	fprintf(stdout, "name: ");
	print_name(name);
	str_cpy(other, name);	//copy contents of name to other
	fprintf(stdout, "\nother: ");
	print_name(other);

	/*exit main */
	exit(0);
}

void print_name(char *name)
{
	int i;
	for(i = 0; name[i] != '\0'; ++i)
	{
		fprintf(stdout, "%c", name[i]);
	}
}


void scan_name(char *name)
{
	int i;
	fprintf(stdout, "name: ");
	for(i = 0; ; ++i)
	{
		fscanf(stdin, "%c", &name[i]);
		if(name[i] == '\n')
		{
			name[i] = '\0';
			break;
		}
	}
}

void str_cpy(char *dest, char *src)
{
	int i;
	for(i = 0; src[i] != '\0'; ++i)
	{
		dest[i] = src[i];
	}
	dest[i] = '\n';
}




