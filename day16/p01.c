#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//malloc : allocates memory. memory contents are not initialized.
//calloc : allocates memory and initalizes it with value 0.
void scan_marks(short *pmarks[], int nstudents, int nsubjects);
void print_marks(short *pmarks[], int nstudents, int nsubjects);

#define NO_STUDENTS 3
#define NO_SUBJECTS 4

int main(int argc, short *argv[])
{
	short *pmarks[NO_STUDENTS];	//array of short pointer
	int i;
	int j;

	//alocate memory for marks
	for(i = 0; i < NO_STUDENTS; ++i)
	{
		pmarks[i] = malloc(NO_SUBJECTS * sizeof(short));
		fprintf(stdout, "pmarks[%d]: %u\n", i, pmarks[i]);
	}
	
	//print addresses
	for(i = 0; i < NO_STUDENTS; ++i)
	{
		for(j = 0; j < NO_SUBJECTS; ++j)
		{
			fprintf(stdout, "\t%u",  &pmarks[i][j]);
		}
		fprintf(stdout, "\n");
	}
	//scan marks
	scan_marks(pmarks, NO_STUDENTS, NO_SUBJECTS);

	//print marks
	print_marks(pmarks, NO_STUDENTS, NO_SUBJECTS);

	//calculate total, print totals in function itself
	calc_total_marks(pmarks, NO_STUDENTS, NO_SUBJECTS); 

	//free memory
	for(i = 0; i < NO_STUDENTS; ++i)
	{
		free(pmarks[i]);
	}
	/*exit main */
	exit(0);
}

void scan_marks(short *pmarks[], int nstudents, int nsubjects)
{
	int i;
	int j;
	for(i = 0; i < nstudents; ++i)
	{
		fprintf(stdout, "student: %d", i);
		for(j = 0; j < nsubjects; ++j)
		{
			fprintf(stdout, "\tmarks for subject %d: ", j);
			fscanf(stdin, "%hd", &pmarks[i][j]);
		}
	}

}

void print_marks(short *pmarks[], int nstudents, int nsubjects)
{
	int i;
	int j;
	for(i = 0; i < nstudents; ++i)
	{
		fprintf(stdout, "student: %d", i);
		for(j = 0; j < nsubjects; ++j)
		{
			fprintf(stdout, "\tmarks for subject %d: %hd\n", j, pmarks[i][j]);
		}
	}

}

