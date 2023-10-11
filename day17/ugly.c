#include <stdio.h>
#include <stdlib.h>

#define NO_STUDENTS 6
#define NO_SUBJECTS 4


//in vi editor create a file nos.txt containg few numbers.
//write a program to read all numbers from nos.txt

void scan_info( FILE *fp, short *prollnos, char *pnames[], char *pgenders, 
			short 
				*pmarks[], int nstudents, int nsubjects);

                void print_info(
FILE *fp, const short *prollnos, const char *pnames[], const char *pgenders,
				const short *pmarks[], const short *ptotalmarks, 
				int nstudents, int nsubjects);

			void 
calc_total(                              const short *pmarks[], short *ptotalmarks, int nstudents, int nsubjects);

int main(int argc, char *argv[])
{short *prollnos = NULL;
           char *pnames[NO_STUDENTS] = {};
	  char *pgenders = NULL;	short *pmarks[NO_STUDENTS] = {};
	short *ptotalmarks = NULL;
	int i;

	FILE *fps;
	FILE *fpd = stdout;

	//open file
	//source: fps
	fps = fopen("/home/icit/workspace/cprog/day18/acstudents.txt", "r");
	if(fps == NULL)
	{
		fprintf(stderr, "unable to open input file...!");
		exit(1);
	}
	//o/p report file: fpd
	//allocate memory
	prollnos = malloc(NO_STUDENTS * sizeof(short));
	if(prollnos == NULL)
	{
		fprintf(stderr, "insufficent memory...");
		exit(2);
	}
	pgenders = malloc(NO_STUDENTS * sizeof(char));
	ptotalmarks = malloc(NO_STUDENTS * sizeof(short));
	for(i = 0; i < NO_STUDENTS; ++i)
	{
		pnames[i] = malloc(32 * sizeof(char));
		pmarks[i] = malloc(NO_STUDENTS * sizeof(char));
	}

	//scan info
	//scan_info(stdin, prollnos, pnames, pgenders, pmarks, NO_STUDENTS, NO_SUBJECTS);
	scan_info(fps, prollnos, pnames, pgenders, pmarks, NO_STUDENTS, NO_SUBJECTS);

	//calculate marks
	calc_total(pmarks, ptotalmarks, NO_STUDENTS, NO_SUBJECTS);
	
	//print info
	print_info(fpd, prollnos, pnames, pgenders, pmarks, ptotalmarks, NO_STUDENTS, NO_SUBJECTS);

	//free memory

	//exit main
	exit(0);

}

void scan_info( FILE *fp, short *prollnos, char *pnames[], char *pgenders, 
				short *pmarks[], int nstudents, int nsubjects)
{
	int i;
	int j;
	for(i = 0; i < nstudents; ++i)
	{
		//fprintf(stdout, "roll no: ");
		fscanf(fp, "%hd%*c", &prollnos[i]);		//prollnos + i
		//fprintf(stdout, "name   : ");
		fscanf(fp, "%s%*c", pnames[i]);		
		//fprintf(stdout, "gender : ");
		fscanf(fp, "%c", &pgenders[i]);			//pgenders + i
		//fprintf(stdout, "marks  : \n");
		for(j = 0; j < nsubjects; ++j)
		{
			//fprintf(stdout, "\tsubject %d: ", j);
			fscanf(fp, "%hd%*c", pmarks[i] + j);				//&pmarks[i][j]);
		}
	}
}

void print_info(FILE *fp, const short *prollnos, const char *pnames[], const char *pgenders,
				const short *pmarks[], const short *ptotalmarks, 
				int nstudents, int nsubjects)
{
	int i;
	int j;
	for(i = 0; i < nstudents; ++i)
	{
		fprintf(fp, "%3hd %-20s %c ", prollnos[i], pnames[i], pgenders[i]);
		for(j = 0; j < nsubjects; ++j)
		{
			fprintf(fp, "%3hd", pmarks[i][j]);
		}
		fprintf(fp, ": %4hd", ptotalmarks[i]);
		fprintf(fp, "\n");
	}

}

void calc_total( const short *pmarks[], short *ptotalmarks, int nstudents, int nsubjects)
{
	//to be implemented
	return;
}
