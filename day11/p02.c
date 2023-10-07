#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char ch = 'A';

	fprintf(stdout, "%d, %d\n", 'A', ch);
	fprintf(stdout, "%d, %d\n", (char)('A' + 'A'), (char)(ch + ch));
	fprintf(stdout, "%d, %d\n", 'A' + 'A', ch + ch);
	fprintf(stdout, "%d, %d\n", (char)('A' + 'A'), (char)(ch + ch));
	fprintf(stdout, "%d, %d\n", 'A' + 'A' + 'A', ch + ch + ch);
	fprintf(stdout, "%d, %d\n", (char)('A' + 'A' + 'A'), (char)(ch + ch + ch));


	return 0;
}
