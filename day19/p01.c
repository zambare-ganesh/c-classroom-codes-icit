#include <stdio.h>
#include <stdlib.h>

//trucure is ser defined data type
//The structure types in C are collections of named components 
//(also called members or fields) that can have different types.
//Structures can be defined to encapsulate related data objects.

struct time{
	short hr;
	short mn;
	short sc;
};

int main(int argc, char *argv[])
{
	struct time t = {5, 20, 32};

	fprintf(stdout, "hour  : %hd\n", t.hr);
	fprintf(stdout, "minute: %hd\n", t.mn);
	fprintf(stdout, "second: %hd\n", t.sc);

	fprintf(stdout, "time : %02hd:%02hd:%02hd\n", t.hr, t.mn, t.sc);

	//some compilers will align structure boundry by 4 bytes
	fprintf(stdout, "sizeof(struct time): %d\n", sizeof(struct time));
	fprintf(stdout, "sizeof(t)          : %d\n", sizeof(t));
	//exit main
	exit(0);
}

