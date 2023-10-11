#include <stdio.h>
#include <stdlib.h>

typedef struct{
	short hr;
	short mn;
	short sc;
	char ampm;
} time12;

typedef struct{
	short hr;
	short mn;
	short sc;
} time24;

void print_time24(const char *prompt, time24 t);
void print_time12(const char *prompt, time12 t);

int main(int argc, char *argv[])
{
	time24 sr1 = {5, 20, 32};		//input
	time24 ss1 = {18, 15, 20};		//input
	time24 dt1;						//output calculate
	
	time12 sr2;						//covert sr1, ss1, dt1
	time12 ss2;						//to sr2, ss2, dt2
	time12 dt2;		
	
	
	print_time24("sunrise 1", sr1);
	print_time24("sunset  1", ss1);
	print_time12("sunrise 2", sr2);
	print_time12("sunset  2", ss2);

	//exit main
	exit(0);
}

void print_time24(const char *prompt, time24 t)
{
	fprintf(stdout, "%s: %02hd:%02hd:%02hd\n", prompt, t.hr, t.mn, t.sc);
}

void print_time12(const char *prompt, time12 t)
{
	if(t.ampm == 'A')
		fprintf(stdout, "%s: %02hd:%02hd:%02hd %s\n", prompt, t.hr, t.mn, t.sc, "am");
	else
		fprintf(stdout, "%s: %02hd:%02hd:%02hd %s\n", prompt, t.hr, t.mn, t.sc, "pm");
}

