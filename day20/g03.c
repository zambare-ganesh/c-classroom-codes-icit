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
}student;

int main(int argc, char *argv[])
{
	student *ps;
	date dob;

	//allocate memory for name
	ps = malloc(sizeof(student));
	//ps.name = malloc(16);	//error: request for member ‘name’ in 
							//something not a structure or union
	ps->name = malloc(16);	//to access structure member via pointer 
							//use -> operator


	//scan data
	fprintf(stdout, "roll no: ");
	fscanf(stdin, "%hd", &ps->rollno);
	fprintf(stdout, "name   : ");
	//fscanf(stdin, "%s%*c", &ps->name[0]);
	fscanf(stdin, "%s%*c", ps->name);
	fprintf(stdout, "gender : ");
	fscanf(stdin, "%c", &ps->gender);

	fprintf(stdout, "dob    : ");
	fscanf(stdin, "%hd%hd%hd", &dob.day, &dob.month, &dob.year);
	
	//print data
	//fprintf(stdout, "%3hd %-15s %c", ps->rollno, &ps->name[0], ps->gender);
	fprintf(stdout, "%3hd %-15s %c %02hd/%02hd/%02hd", ps->rollno, ps->name, 
					ps->gender, dob.day, dob.month, dob.year);

	//exit main
	exit(0);
}
