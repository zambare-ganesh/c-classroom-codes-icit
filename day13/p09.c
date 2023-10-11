#include <stdio.h>
#include <stdlib.h>


void dummy(char *ca);

int main(int argc, char *argv[])
{
	char ca[6] = {'A', 'D', 'C'};
	int i;

	fprintf(stdout, "main: sizeof(ca): %d\n", sizeof(ca));
	
	dummy(ca);		//address of first element is passed.
	//dummy(&ca[0]);//address of first element is passed.
					//value of elements are not passed.
	//fprintf(stdout, "%c", ca[-3]);		//valid. i.e. *(ca - 3)
	//fprintf(stdout, "%c", ca[10]);		//valid. i.e. *(ca + 10);
	//ca[i] : *(ca + i) :  *(i + ca) : i[ca]
	//fprintf(stdout, "0[c]: %c\n", 0[ca]); //: ca[0]	
	//fprintf(stdout, "1[c]: %c\n", 1[ca]); //: ca[1]	
	//fprintf(stdout, "2[c]: %c\n", 2[ca]); //: ca[2]	
	for(i = 0; i < 6; ++i)
	{
		fprintf(stdout, "%d[c]: %c\n", i, i[ca]); //: ca[i]	
	}
	//fprintf(stdout, "[c]: %c", [ca]);	//error

	//in c language, array bounds are not checked.
	//it is programmers responsibility to use valid indices.
	//c is serious programmers language.

	/*exit main */
	exit(0);
}

//void dummy(char *ca)
//void dummy(char ca[])
void dummy(char ca[100])	//length has no meaning
{
	fprintf(stdout, "sizeof(ca): %d\n", sizeof(ca));
}
