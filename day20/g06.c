#include <stdio.h>
#include <stdlib.h>

typedef struct{
	short day;
	short month;
	short year;
}date;

typedef struct{
	short rollno;
	char *name;
	char gender;
	short marks[4];
	short total_marks;
}student;

int main(int argc, char *argv[])
{
	student *ps;
	date dob[3];
	FILE *fps;
	int i;

	//allocate memory
	ps = malloc(3 * sizeof(student));
	for(i = 0; i < 3; ++i)
	{
		ps[i].name = malloc(20 * sizeof(char));
	}

	//free memory
	for(i = 0; i < 3; ++i)
	{
		free(ps[i].name);
	}
	free(ps);

	//exit main
	exit(0);
}


