#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int x;
	char ch;

	fprintf(stdout, "sizeof(char): %d\n", sizeof(char));
	fprintf(stdout, "sizeof(ch)  : %d\n", sizeof(ch));
	//char constants are treated as int constants in C Language
	fprintf(stdout, "sizeof('A') : %d\n", sizeof('A'));
	fprintf(stdout, "sizeof(int) : %d\n", sizeof(int));
	fprintf(stdout, "sizeof(x)   : %d\n", sizeof(x));
	fprintf(stdout, "sizeof(10)  : %d\n", sizeof(10));
	//exit main
	exit(0);
}
