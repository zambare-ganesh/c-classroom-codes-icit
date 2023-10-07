#include <stdio.h>
#include <stdlib.h>

void dummy()	;
int main(int argc, char *argv[])
{
	dummy();
	//exit main
	exit(0);
}

void dummy()	
{
	static int i = 0;
	++i;
	fprintf(stdout, "i: %d\n", i);
	if( i < 10)
	{
		dummy();
	}

}
