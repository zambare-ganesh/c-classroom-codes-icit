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


typedef unsigned long long (*operation) (int);		
//operation type represents a function pointer

void print_array(Student *ps, int length);
int cmp_name(const void *, const void *);
int cmp_marks(const void *pv1, const void *pv2);
int main(int argc, char *argv[])
{
	Student ps[3] = {
		{71, NULL,	'M',	12,  3, 2004, 30, 85, 73, 36},
		{72, NULL,	'F',	15,  5, 2003, 87, 80, 65, 86},
		{73, NULL,	'F',	16, 12, 2004, 85, 75, 37, 30}
	};
	Student *location;
	Student s;
	int i;
	int index;
	//allocate memory
	for(i = 0; i < 3; ++i)
	{
		ps[i].name = malloc(16);
		if(ps[i].name == NULL)
		{
			fprintf(stderr, "error, failed to allocate memory for name...");
			exit(1);
		}
	}
	
	//initialize names
	strcpy(ps[0].name, "Mainak");
	strcpy(ps[1].name, "Arpita");
	strcpy(ps[2].name, "Radhika");	
	
	print_array(&ps[0], 3);
	qsort(&ps[0], sizeof(ps)/sizeof(ps[0]), sizeof(ps[0]), cmp_name);
	//qsort(&ps[0], sizeof(ps)/sizeof(ps[0]), sizeof(ps[0]), cmp_marks);
	fprintf(stdout, "\n\n");

	print_array(&ps[0], 3);

	fprintf(stdout, "name: ");
	fscanf(stdin, "%s", &s.name[0]);
	//fprintf(stdout, "marks: ");
	//fscanf(stdin, "%hd", &s.mtotal);
	
	location = bsearch(&s, &ps[0], sizeof(ps)/sizeof(ps[0]), 
									sizeof(ps[0]), cmp_name); 
	//location = bsearch(&s, &ps[0], sizeof(ps)/sizeof(ps[0]), 
	//								sizeof(ps[0]), cmp_marks); 

	
	if(location != NULL)
	{
		index = location - &ps[0];
		fprintf(stdout, "%s found in array at index %d\n", s.name, index);
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
		fprintf(stdout, "%3hd %-15s %c %02hd-%02hd-%02hd", 
						ps[i].rollno, ps[i].name, ps[i].gender, 
						ps[i].dob.day, ps[i].dob.month, ps[i].dob.year);
		ps[i].mtotal = 0;;
		for(j = 0; j < 4; ++j)
		{
			fprintf(stdout, "%3hd", ps[i].marks[j]);
			ps[i].mtotal += ps[i].marks[j];
		}
		fprintf(stdout, ": %3hd\n", ps[i].mtotal);
	}
}
int cmp_name(const void *pv1, const void *pv2)
{
	Student *p1 = (Student *) pv1;
	Student *p2 = (Student *) pv2;
	return strcmp(p1->name, p2->name);
}
int cmp_marks(const void *pv1, const void *pv2)
{
	Student *p1 = (Student *) pv1;
	Student *p2 = (Student *) pv2;
	//fprintf(stdout, "%d\n");
	return p1->mtotal - p2->mtotal;
}

