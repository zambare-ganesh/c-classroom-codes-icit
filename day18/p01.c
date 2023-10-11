#include <stdio.h>
#include <stdlib.h>

#define NO_STUDENTS 3
#define NO_SUBJECTS 4
int main(int argc, char *argv[])
{
	short int ppm[NO_STUDENTS][NO_SUBJECTS];//two dimensional array on stack
	short int totalmarks[NO_STUDENTS];		//row wise sum
	short int avgscore[NO_SUBJECTS];		//column wise sum/NO_STUDENTS
	int i;
	int j;
		
	fprintf(stdout, "&i   : %u\n", &i);
	fprintf(stdout, "&j   : %u\n", &j);
	fprintf(stdout, "&ppm : %u\n", &ppm);
	fprintf(stdout, "ppm  : %u\n", ppm);
	//print array ppm
	for(i = 0; i < NO_STUDENTS; ++i)
	{
		//fprintf(stdout, "ppm + %d : %u\n", i, ppm + i);
		fprintf(stdout, "ppm[%d] : %u\n", i, ppm[i]);
		for(j = 0; j < NO_SUBJECTS; ++j)
		{
			//fprintf(stdout, "\t%u", &ppm[i][j]);
			//fprintf(stdout, "\t%u", ppm[i] + j);
			fprintf(stdout, "\t%u", *(ppm + i) + j);
		}
		fprintf(stdout, "\n");
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
