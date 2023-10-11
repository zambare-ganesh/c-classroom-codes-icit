#include <stdio.h>
#include <stdlib.h>

typedef union
{
	int x;
	double y;
	char a[6];
	char b[6];
	long double ld;
	char v[6];
	char c[6];
	char d[6];
	char ch;
}DemoUnion;
//all members share same memory in union.
//sizeof widest member is size of union union.
int main(int argc, char *argv[])
{
	fprintf(stdout, "sizeof(DemoUnion): %d\n", sizeof(DemoUnion));
	//exit main
	exit(0);
}
