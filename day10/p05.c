#include <stdio.h>
#include <stdlib.h>

int i;
void dummy()	;
int main(int argc, char *argv[])
{
	dummy();
	//exit main
	exit(0);
}

void dummy()	
{
	++i;
	fprintf(stdout, "i: %d\n", i);
	if( i < 10)
	{
		dummy();
	}

}
