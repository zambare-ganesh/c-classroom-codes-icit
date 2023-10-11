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
	student s;
	date dob;

	//allocate memory for name
	s.name = malloc(16);

	//scan data
	fprintf(stdout, "roll no: ");
	fscanf(stdin, "%hd", &s.rollno);
	fprintf(stdout, "name   : ");
	//fscanf(stdin, "%s%*c", &s.name[0]);
	fscanf(stdin, "%s%*c", s.name);
	fprintf(stdout, "gender : ");
	fscanf(stdin, "%c", &s.gender);

	fprintf(stdout, "dob    : ");
	fscanf(stdin, "%hd%hd%hd", &dob.day, &dob.month, &dob.year);
	
	//print data
	//fprintf(stdout, "%3hd %-15s %c", s.rollno, &s.name[0], s.gender);
	fprintf(stdout, "%3hd %-15s %c %02hd/%02hd/%02hd", s.rollno, s.name, 
					s.gender, dob.day, dob.month, dob.year);

	//exit main
	exit(0);
}
