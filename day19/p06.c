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

	//print_time12("sunrise 2", sr2);
	//print_time12("sunset  2", ss2);
	
	dt1.hr = ss1.hr - sr1.hr;
	dt1.mn = ss1.mn - sr1.mn;
	dt1.sc = ss1.sc - sr1.sc;

	if(dt1.sc < 0)
	{
		--dt1.mn;
		dt1.sc += 60;
	}
	if(dt1.mn < 0)
	{
		--dt1.hr;
		dt1.mn += 60;
	}
	if(dt1.hr < 0)
	{
		fprintf(stderr, "error: sunset less than sunrise...");
		exit(1);
	}
	
	print_time24("sunset   1", ss1);
	print_time24("sunrise  1", sr1);
	print_time24("day time 1", dt1);

	if(ss1.hr >= 12)
	{
		ss2.hr = ss1.hr - 12;
		ss2.ampm = 'P';
	}
	else
	{
		ss2.hr = ss1.hr;
		ss2.ampm = 'A';
	}
	ss2.mn = ss1.mn;
	ss2.sc = ss1.sc;
	ss2.hr = ss1.hr;

	print_time12("sunset   2", ss2);
	print_time12("sunrise  2", sr2);
	print_time12("day time 2", dt2);
	//exit main
	exit(0);
}

void print_time24(const char *prompt, time24 t)
{
	fprintf(stdout, "%s: %02hd:%02hd:%02hd\n", prompt, t.hr, t.mn, t.sc);
}

void print_time12(const char *prompt, time12 t)
{
	/*
	if(t.ampm == 'A')
		fprintf(stdout, "%s: %02hd:%02hd:%02hd %s\n", prompt, t.hr, t.mn, t.sc, "am");
	else if(t.ampm == 'P')
		fprintf(stdout, "%s: %02hd:%02hd:%02hd %s\n", prompt, t.hr, t.mn, t.sc, "pm");
	else
		fprintf(stdout, "%s: %02hd:%02hd:%02hd\n", prompt, t.hr, t.mn, t.sc);
	*/
	fprintf(stdout, "%s: %02hd:%02hd:%02hd ", prompt, t.hr, t.mn, t.sc);
	fprintf(stdout, "%s\n", (t.ampm == 'A')? "AM": (t.ampm == 'P')? "pm": "");
}

