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

void scan_info(student *ps, date *pdob);
void print_info(student *ps, date dob);
void print_header();
void print_footer();
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
	scan_info(ps, &dob);

	//print data
	print_header();
	print_info(ps, dob);
	print_footer();
	//exit main
	exit(0);
}

void scan_info(student *ps, date *pdob)
{
	fprintf(stdout, "roll no: ");
	fscanf(stdin, "%hd", &ps->rollno);
	fprintf(stdout, "name   : ");
	//fscanf(stdin, "%s%*c", &ps->name[0]);
	fscanf(stdin, "%s%*c", ps->name);
	fprintf(stdout, "gender : ");
	fscanf(stdin, "%c", &ps->gender);
	fprintf(stdout, "dob    : ");
	fscanf(stdin, "%hd%hd%hd", &pdob->day, &pdob->month, &pdob->year);
}
void print_info(student *ps, date dob)
{
	//fprintf(stdout, "%3hd %-15s %c", ps->rollno, &ps->name[0], ps->gender);
	fprintf(stdout, "%6hd %-15s %-6c %02hd/%02hd/%02hd\n", ps->rollno, ps->name, 
					ps->gender, dob.day, dob.month, dob.year);
}

void print_header()
{
	fprintf(stdout, "------ --------------- ------ ----------\n");
	fprintf(stdout, "%6s %-15s %6s %10s\n", "rollno", "name", "gender", "birth date");
	fprintf(stdout, "------ --------------- ------ ----------\n");
}
void print_footer()
{
	fprintf(stdout, "------ --------------- ------ ----------\n");
}
