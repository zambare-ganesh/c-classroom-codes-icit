#include <stdio.h>
#include <stdlib.h>

//unconditional jump
//goto is abuse: it depends on programmer

int main(int argc, char *argv[])
{

	goto LBL;
	fprintf(stdout, "hello");
LBL:
	fprintf(stdout, "icit");
	//exit main
	exit(0);
}
