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
time24 getduration(time24 ss, time24 sr);
time12 time24to12(time24 t);

int main(int argc, char *argv[])
{
	time24 sr1 = {5, 20, 32};		//input
	time24 ss1 = {18, 15, 20};		//input
	time24 dt1;						//output calculate
	
	time12 sr2;						//covert sr1, ss1, dt1
	time12 ss2;						//to sr2, ss2, dt2
	time12 dt2;		

	//if ss1 is less than sr1 swap ss1 and sr1

	dt1 = getduration(ss1, sr1);
	
	ss2 = time24to12(ss1);
	sr2 = time24to12(sr1);

	print_time12("sunset   2", ss2);
	print_time12("sunrise  2", sr2);
	print_time24("sunset   2", dt1);
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
	fprintf(stdout, "%s\n", (t.ampm == 'A')? "am": (t.ampm == 'P')? "pm": "");
}

time24 getduration(time24 ss, time24 sr)
{
	time24 dt = ss;

	dt.hr -= sr.hr;
	dt.mn -= sr.mn;
	dt.sc -= sr.sc;

	if(dt.sc < 0) {--dt.mn; dt.sc += 60;}
	if(dt.mn < 0) {--dt.hr; dt.mn += 60;}

	return dt;
}
time12 time24to12(time24 t)
{
	time12 t12;
	if(t.hr >= 12)
	{
		t12.hr = t.hr - 12;
		t12.ampm = 'P';
	}
	else
	{
		t12.hr = t.hr;
		t12.ampm = 'A';
	}
	t12.mn = t.mn;
	t12.sc = t.sc;
	return t12;
}

