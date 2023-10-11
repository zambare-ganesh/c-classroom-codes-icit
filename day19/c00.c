#include <stdio.h>
#include <stdlib.h>

typedef struct{
	short hr;
	short mn;
	short sc;
	char ampm[3];
} time12;

typedef struct{
	short hr;
	short mn;
	short sc;
} time24;

void print_time24(const char *prompt, time24 t);
void print_time12(const char *prompt, time12 t);
time24 time12to24(time12);

int main(int argc, char *argv[])
{
	time12 sr2 = {5, 20, 32, "am"};	//input
	time12 ss2 = {6, 15, 20, "pm"};	//input
	
	time24 sr1 = time12to24(sr2);
	time24 ss1 = time12to24(ss2);

	print_time24("sr1", sr1);
	print_time24("sr2", ss1);
	

	//exit main
	exit(0);
}

time24 time12to24(time12 t)
{
	time24 t1;
	if(t.ampm == 'P')
	{
		t1.hr = t.hr + 12;
	}
	else
	{
		t1.hr = t.hr;
	}
	
	
	t1.mn = t.mn;
	t1.sc = t.sc;

	return t1;
}
void print_time24(const char *prompt, time24 t)
{
	fprintf(stdout, "%s: %02hd:%02hd:%02hd\n", prompt, t.hr, t.mn, t.sc);
}

void print_time12(const char *prompt, time12 t)
{
	fprintf(stdout, "%s: %02hd:%02hd:%02hd %s\n", prompt, t.hr, t.mn, t.sc, t.ampm);
}

