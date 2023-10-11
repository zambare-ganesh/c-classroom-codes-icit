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

int main( int argc, char *argv)
{
	Student s;

	//allocate memory
	s.name = malloc(16);
	if(s.name == NULL)
	{
		fprintf(stderr, "error, failed to allocate memory for name...");
		exit(1);
	}
	//strcpy(&s.name[0], "ganesh");
	strcpy(s.name, "ganesh");

	//call functions
	scan_info(&s);
	calc_mtotal(&s);
	print_info(&s);

	//free memory
	if(s.name != NULL)
	{
		free(s.name);
		s.name = NULL;
	}

	//exit main
	exit(0);
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
	int ret;
	ret = fscanf(stdin, "%hd%s%*c%c%2hd%02hd%hd", &ps->rollno, ps->name, &ps->gender,
								&ps->dob.day, &ps->dob.month, &ps->dob.year);
	for(i = 0; i < 4; ++i)
	{
		ret += fscanf(stdin, "%hd", &ps->marks[i]);
		//fscanf(stdin, "%hd", &ps->marks[0] + i);
		//fscanf(stdin, "%hd", ps->marks + i);
	}
	fprintf(stdout, "ret: %d\n", ret);
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
