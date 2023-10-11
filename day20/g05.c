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

void scan_info(FILE *fp, student *ps, date *pdob);
void print_info(FILE *fp, student *ps, date dob);
void calc_marks(student *ps);
void print_header();
void print_footer();

int main(int argc, char *argv[])
{
	student *ps;
	date dob;
	FILE *fps;

	//allocate memory for name
	ps = malloc(sizeof(student));
	if(ps == NULL)
	{
		fprintf(stderr, "error: not enough memory...");
		exit(1);
	}
	//ps.name = malloc(16);	//error: request for member ‘name’ in 
							//something not a structure or union
	ps->name = malloc(16);	//to access structure member via pointer 
							//use -> operator
	if(ps->name == NULL)
	{
		fprintf(stderr, "error: not enough memory...");
		exit(1);
	}

	fps = fopen("./student_info.txt", "r");
	if(fps == NULL)
	{
		fprintf(stderr, "error: unable to open student_info.txt...");
		exit(2);
	}

	//print data
	print_header();
	while(!feof(fps))
	{
		scan_info(fps, ps, &dob);
		print_info(stdout, ps, dob);
	}

	print_footer();

	//free alocated memory
	if(ps != NULL)
	{
		if(ps->name != NULL)
		{
			free(ps->name);
			ps->name = NULL;
		}
		free(ps);
		ps = NULL;
	}
	//close file
	if(fps != NULL)
	{
		fclose(fps);
	}
	//exit main
	exit(0);
}

void scan_info(FILE *fp, student *ps, date *pdob)
{
	int i;
	/*
	fprintf(stdout, "roll no: ");
	fscanf(fp, "%hd", &ps->rollno);
	fprintf(stdout, "name   : ");
	//fscanf(fp, "%s%*c", &ps->name[0]);
	fscanf(fp, "%s%*c", ps->name);
	fprintf(stdout, "gender : ");
	fscanf(fp, "%c", &ps->gender);
	fprintf(stdout, "dob    : ");
	fscanf(fp, "%hd%hd%hd", &pdob->day, &pdob->month, &pdob->year);

	fprintf(stdout, "marks:\n");
	*/
	fscanf(fp, "%hd%s%*c%c%hd%hd%hd", &ps->rollno, ps->name, &ps->gender,
									&pdob->day, &pdob->month, &pdob->year);
	for(i = 0; i < 4; ++i)
	{
		//fprintf(stdout, "\tsubject %d:", i);
		fscanf(fp, "%hd", &ps->marks[i]);
	}
}
void print_info(FILE *fp, student *ps, date dob)
{
	int i;
	//fprintf(stdout, "%3hd %-15s %c", ps->rollno, &ps->name[0], ps->gender);
	fprintf(fp, "%6hd %-15s %-6c %02hd/%02hd/%02hd", ps->rollno, ps->name, 
					ps->gender, dob.day, dob.month, dob.year);
	for(i = 0; i < 4; ++i)
	{
		fprintf(fp, "%3hd", ps->marks[i]);
	}
	fprintf(fp, "\n");
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

