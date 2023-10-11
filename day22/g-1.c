#include <stdio.h>
#include <stdlib.h>

typedef unsigned long long TYPE;
void show_bits(TYPE no, int pos);

int main(int argc, char *argv[])
{
	fprintf(stdout, "         1         2         3         4         5         6\n");
	fprintf(stdout, "1234567890123456789012345678901234567890123456789012345678901234");
	show_bits(123456789012345ULL, -1);

	//exit main
	exit(0);
}


void show_bits(TYPE no, int pos)
{
	if(pos == -1) pos = sizeof(TYPE) * 8;
	if(pos == 0) { fprintf(stdout, "\n"); return;}

	show_bits(no/2, --pos);
	
	fprintf(stdout, "%Lu", no % 2);
}
