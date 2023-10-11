#include <stdio.h>
#include <stdlib.h>

struct date{
	short day;
	short month;
	short year;
};

typedef struct{
	short rollno;
	char *name;
	char gender;
	struct date dob;
	short marks[4];
	short total_marks;
}student;

int main(int argc, char *argv[])
{
	student s;

	//exit main
	exit(0);
}


