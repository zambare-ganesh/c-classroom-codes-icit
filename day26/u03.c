#include <stdio.h>
#include <stdlib.h>

typedef union
{
	short x;
	char bytes[2];
}endian;
//all members share same memory in union.
//sizeof widest member is size of union union.
int main(int argc, char *argv[])
{
	endian u;
	u.x = 513;

	fprintf(stdout, "u.x: %hd, bytes[0]: %d, bytes[1]:%d\n",
					u.x, u.bytes[0], u.bytes[1]);
	//exit main
	exit(0);
}
