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
	short total_marks;
}Student;

void print_info(Student x);
int main( int argc, char *argv)
{
	Student s = {
		10,
		NULL,
		'M',
		{19, 1, 1969},
		{35, 40, 27, 36},
		138
	};

	//allocate memory
	s.name = malloc(16);
	if(s.name == NULL)
	{
		fprintf(stderr, "error, failed to allocate memory for name...");
		exit(1);
	}
	strcpy(s.name, "ganesh");

	//call function
	print_info(s);

	//free memory
	if(s.name != NULL)
	{
		free(s.name);
		s.name = NULL;
	}

	//exit main
	exit(0);
}

void print_info(Student x)
{
	int i;
	fprintf(stdout, "%3hd %-15s%02hd-%02hd-%02hd", x.rollno, x.name, 
								x.dob.day, x.dob.month, x.dob.year);
	for(i = 0; i < 4; ++i)
	{
		fprintf(stdout, "%3hd", x.marks[i]);
	}
	fprintf(stdout, ": %3hd\n", x.total_marks);
}
