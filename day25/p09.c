#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	unsigned char day;
	unsigned char month;
	unsigned year;
}sdate;

typedef union{
	sdate d;
	unsigned ndate ;
} Date;
typedef struct {
	short rollno;
	char *name;
	char gender;
	Date dob;
	short marks[4];
	short mtotal;
}Student;


int cmp_marks(Student *s1, Student *s2);
int cmp_names(Student *s1, Student *s2);
int cmp_dob(Student *s1, Student *s2);

void print_info(Student *ps, int nsubjects);
void calc_mtotal(Student *ps, int nsubjects);

typedef int (*cmpfn)(Student *s1, Student *s2);

int main(int argc, char *argv[])
{
	int choice;
	int result;

	Student s1 = {71, "Mainak",	'M', {12, 3, 2004}, {10, 85, 79, 76}};
	Student s2 = {72, "Arpita",	'F', {15, 5, 2003}, {87, 80, 65, 86}};
	cmpfn cmp[4] = {NULL, cmp_marks, cmp_names, cmp_dob};

	calc_mtotal(&s1, 4);
	calc_mtotal(&s2, 4);

	print_info(&s1, 4);
	print_info(&s2, 4);
	do
	{
		fprintf(stdout, "1. marks\n");
		fprintf(stdout, "2. names\n");
		fprintf(stdout, "3. date of birth\n");
		fprintf(stdout, "enter choice: ");
		fscanf(stdin, "%d", &choice);
		if(choice >= 1 && choice <= 3)
		{
			result = cmp[choice](&s1, &s2);
			if(result == 0) 		
				fprintf(stdout, "s1 == s2\n");
			else if(result > 0)	 	
				fprintf(stdout, "s1 > s2\n");
			else 			
				fprintf(stdout, "s1 < s2\n");
		}
	}while(choice != 0);
	//exit main
	exit(0);
}

void print_info(Student *ps, int nsubjects)
{
	int i;
	fprintf(stdout, "%3hd %-15s %c %02hd-%02hd-%02hd", 
				ps->rollno, ps->name, ps->gender, 					
				ps->dob.d.day, ps->dob.d.month, ps->dob.d.year);
	for(i = 0; i < nsubjects; ++i)
	{
		fprintf(stdout, "%3hd", ps->marks[i]);
	}
	fprintf(stdout, ": %3hd\n", ps->mtotal);
}
void calc_mtotal(Student *ps, int nsubjects)
{
	short sum = 0;
	int i;
	for(i = 0; i < nsubjects; ++i)
	{
		sum += ps->marks[i];
	}
	ps->mtotal = sum;
}
int cmp_marks(Student *s1, Student *s2)
{
	return s1->mtotal - s2->mtotal;
}
int cmp_names(Student *s1, Student *s2)
{
	return strcmp(s1->name, s2->name);
}
int cmp_dob(Student *s1, Student *s2)
{
	return s1->dob.ndate - s2->dob.ndate;
}
