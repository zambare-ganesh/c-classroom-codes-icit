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


//pointer arithmetic is not applicable for void pointers.
//sizeof double
int main(int argc, char *argv[])
{
	int sz;

	sz = (int)((Student *)NULL + 1);

	//display size
	fprintf(stdout, "sz: %u\n", sz);

	//exit main
	exit(0);
}
