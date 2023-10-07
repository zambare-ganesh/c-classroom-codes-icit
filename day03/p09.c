#include <stdio.h>
#include <stdlib.h>

//unconditional jump
//goto is abuse: it depends on programmer

int main(int argc, char *argv[])
{
	int index = 1;
	int no = 9;
	int val;

	//achieve the same using switch
	START1:
	if(index <= 10)
	{
		val = no * index;
		fprintf(stdout, "%2d x %2d: %3d\n", no, index, val);
		++index;
		goto START1;
	}

	index = 1;
	START2:
	switch(index)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
			val = no * index;
			fprintf(stdout, "%2d x %2d: %3d\n", no, index, val);
			++index;
			goto START2;
	}
	/* fill in the blanks
	index = 1;
	START2:
	switch(xxxxxx)
	{
		case xxx:
			val = no * index;
			fprintf(stdout, "%2d x %2d: %3d\n", no, index, val);
			++index;
			goto START2;
	}
	*/
	//exit main
	exit(0);
}


