#include <stdio.h>
#include <stdlib.h>

//unconditional jump
//goto is abuse: it depends on programmer

int main(int argc, char *argv[])
{
	int index = 1;
	int no = 9;
	int val;

	START:
	val = no * index;
	fprintf(stdout, "%2d x %2d: %3d\n", no, index, val);
	++index;
	goto START;
	
	//exit main
	exit(0);
}
