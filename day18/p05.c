#include <stdio.h>
#include <stdlib.h>

#define NO_STUDENTS 3
#define NO_SUBJECTS 4
int main(int argc, char *argv[])
{
	short int *ppm[NO_STUDENTS];	//ppm:  array of short pointers
	int i;
	int j;
		
	//allocate memory
	for(i = 0; i < NO_STUDENTS; ++i)
	{
		ppm[i] = malloc(NO_SUBJECTS * sizeof(short));
		//*(ppm +i) = malloc(NO_SUBJECTS * sizeof(short));
	}

	fprintf(stdout, "&i   : %u\n", &i);
	fprintf(stdout, "&j   : %u\n", &j);
	fprintf(stdout, "&ppm : %u\n", &ppm);
	fprintf(stdout, "ppm  : %u\n", ppm);
	//print array ppm
	for(i = 0; i < NO_STUDENTS; ++i)
	{
		fprintf(stdout, "ppm + %d : %u\n", i, ppm + i);
		//fprintf(stdout, "*(ppm + %d) : %u\n", i, *(ppm + i));
		fprintf(stdout, "ppm[%d] : %u\n", i, ppm[i]);
	}

	//scan marks
	for(i = 0; i < NO_STUDENTS; ++i)
	{
		fprintf(stdout, "student %d: \n", i);
		for(j = 0; j < NO_SUBJECTS; ++j)
		{
			fprintf(stdout, "\tmarks for subject %d: ", j);
			//fscanf(stdin, "%hd: ", &ppm[i][j]);
			//fscanf(stdin, "%hd: ", ppm[i] + j);
			fscanf(stdin, "%hd: ", *(ppm + i) + j);
		}
	}

	//print marks
	for(i = 0; i < NO_STUDENTS; ++i)
	{
		fprintf(stdout, "marks of student %d: ", i);
		for(j = 0; j < NO_SUBJECTS; ++j)
		{
			//fprintf(stdout, "\t%hd", ppm[i][j]);
			//fprintf(stdout, "\t%hd", *(ppm[i] + j));
			fprintf(stdout, "\t%hd", *(*(ppm + i) + j));
		}
		fprintf(stdout, "\n");
	}

	//exit main
	exit(0);
}
