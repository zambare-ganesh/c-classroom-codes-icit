//create an array of 3 students on heap
//write functions to
//	a. scan_info from user/file
//	b. print_info on console
//	c. calculate_total_marks
//	d. student_having_lowest_marks
//	e. youngest_student
//	f. alphabetically_last_student
/*
note: 
	#don'use printfs except question a and b.
	#don't pass or return entire structure object
	#always pass/return pointers to structure. 
	#question d, e, f should return address of particular students.
*/
/*
	1. Array on heap
	2. Array of structure pointers on stack.
	3. Array of structure pointers on heap.
*/


/*
	it covers
	1. nested structures.
	2. array of structures.
	3. arrray within structure.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
	short day;	
	short month;	
	short year;	
} Date;
typedef struct {
	short rollno;
	char *name;
	char gender;
	Date dob;
	short marks[4];
	short mtotal;
}Student;

//always pass pointers to structure not entire structue
void print_info(Student *ps);
void scan_info(Student *ps);
void calc_mtotal(Student *ps);
	
void print_array(Student *ps, int length);
//void print_array(Student ps[], int length);
//void print_array(Student ps[1000], int length);
void scan_array(Student *ps, int length);
void calc_mtotal_array(Student *ps, int length);

int main( int argc, char *argv)
{
	Student sa[3] = {
		{71, NULL,	'M',	12,  3, 2004, 90, 85, 79, 96},
		{72, NULL,	'F',	15,  5, 2003, 87, 80, 65, 86},
		{73, NULL,	'F',	16, 12, 2004, 85, 75, 97, 90}
	};
	int i;
	int j;

	//allocate memory
	for(i = 0; i < 3; ++i)
	{
		sa[i].name = malloc(16);
		if(sa[i].name == NULL)
		{
			fprintf(stderr, "error, failed to allocate memory for name...");
			exit(1);
		}
	}
	//initialize names
	strcpy(sa[0].name, "Mainak");
	strcpy(sa[1].name, "Arpita");
	strcpy(sa[2].name, "Radhika");

	calc_mtotal_array(sa, 3);
	print_array(&sa[0], 3);
	//print_array(sa + 0, 3);
	//print_array(sa, 3);

	for(i = 0; i < 3; ++i)
	{
		fprintf(stdout, "%3hd %-15s %c %02hd-%02hd-%02hd", 
						sa[i].rollno, sa[i].name, sa[i].gender, 
						sa[i].dob.day, sa[i].dob.month, sa[i].dob.year);
		for(j = 0; j < 4; ++j)
		{
			fprintf(stdout, "%3hd", sa[i].marks[j]);
		}
		fprintf(stdout, ": %3hd\n", sa[i].mtotal);
	}

	//free memory
	for(i = 0; i < 3; ++i)
	{
		if(sa[i].name != NULL)
		{
			free(sa[i].name);
			sa[i].name = NULL;
		}
	}

	//exit main
	exit(0);
}

void print_array(Student *ps, int length)
{
	int i;
	int j;

	for(i = 0; i < length; ++i)
	{
		print_info(&ps[i]);	//ps + i
	}
}

void scan_array(Student *ps, int length)
{
	int i;
	int j;

	for(i = 0; i < length; ++i)
	{
		scan_info(ps + i);	//&ps[0]
	}
}

void calc_mtotal_array(Student *ps, int length)
{
	int i;
	int j;
	int sum;

	for(i = 0; i < length; ++i)
	{
		calc_mtotal(&ps[i]);
	}
}
void print_info(Student *ps)
{
	int i;
	fprintf(stdout, "%3hd %-15s %c %02hd-%02hd-%02hd", ps->rollno, ps->name, ps->gender, 
								ps->dob.day, ps->dob.month, ps->dob.year);
	for(i = 0; i < 4; ++i)
	{
		fprintf(stdout, "%3hd", ps->marks[i]);
	}
	fprintf(stdout, ": %3hd\n", ps->mtotal);
}
void scan_info(Student *ps)
{
	int i;
	fscanf(stdin, "%hd%s%*c%c%hd%hd%hd", &ps->rollno, ps->name, &ps->gender,
								&ps->dob.day, &ps->dob.month, &ps->dob.year);
	for(i = 0; i < 4; ++i)
	{
		fscanf(stdin, "%hd", &ps->marks[i]);
		//fscanf(stdin, "%hd", &ps->marks[0] + i);
		//fscanf(stdin, "%hd", ps->marks + i);
	}
}

void calc_mtotal(Student *ps)
{
	short sum = 0;
	int i;
	for(i = 0; i < 4; ++i)
	{
		sum += ps->marks[i];
	}
	ps->mtotal = sum;
}
