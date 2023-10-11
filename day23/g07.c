#include <stdio.h>
#include <stdlib.h>

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

//sizeof double
int main(int argc, char *argv[])
{
	int sz;

	sz = (int)((double *)NULL + 1);

	//display size
	fprintf(stdout, "sz: %u\n", sz);

	//exit main
	exit(0);
}

