#include <stdio.h>
#include <stdlib.h>

//nested loops
int main(int argc, char *argv[])
{
	short rows;		//input
	short cols;		//input
	int i, j;		//index variables

	//input data
	fprintf(stdout, "rows: ");
	fscanf(stdin, "%hd", &rows);
	fprintf(stdout, "cols: ");
	fscanf(stdin, "%hd", &cols);

	//print pattern
	//for(i = 1; i <=rows; ++i )
	for(i = 0; i < rows; ++i )
	{
		//print a row havins cols no of stars
		fprintf(stdout, "\n");
		for(j = 0; j < cols; ++j)
		{
			fprintf(stdout, "*");
		}
	}

	

	//exit main
	exit(0);
}
