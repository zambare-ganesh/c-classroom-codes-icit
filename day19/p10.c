#include <stdio.h>
#include <stdlib.h>

typedef struct{
	short hr;
	short mn;
	short sc;
	char ampm[3];		//am\0 or pm\0 or \0
} time12;

typedef struct{
	short hr;
	short mn;
	short sc;
} time24;

void print_time24(const char *prompt, time24 t);
void print_time12(const char *prompt, time12 t);
time12 time24to12(time24 t);
char *str_cpy(char *d, char *s);
int main(int argc, char *argv[])
{
	time24 sr1 = {5, 20, 32};		//input
	time24 ss1 = {18, 15, 20};		//input
	
	time12 sr2;						//covert sr1, ss1, dt1
	time12 ss2;						//to sr2, ss2

	ss2 = time24to12(ss1);
	sr2 = time24to12(sr1);

	print_time12("sunset   2", ss2);
	print_time12("sunrise  2", sr2);
	//exit main
	exit(0);
}

void print_time24(const char *prompt, time24 t)
{
	fprintf(stdout, "%s: %02hd:%02hd:%02hd\n", prompt, t.hr, t.mn, t.sc);
}

void print_time12(const char *prompt, time12 t)
{
		fprintf(stdout, "%s: %02hd:%02hd:%02hd %s\n", prompt, 
							t.hr, t.mn,t.sc, t.ampm);
}

time12 time24to12(time24 t)
{
	time12 t12;
	if(t.hr >= 12)
	{
		t12.hr = t.hr - 12;
		/*
		t12.ampm[0] = 'p';
		t12.ampm[1] = 'm';
		t12.ampm[2] = '\0';
		*/
		str_cpy(t12.ampm, "pm");
	}
	else
	{
		t12.hr = t.hr;
		/*
		t12.ampm[0] = 'a';
		t12.ampm[1] = 'm';
		t12.ampm[2] = '\0';
		*/
		str_cpy(t12.ampm, "am");
	}
	t12.mn = t.mn;
	t12.sc = t.sc;
	return t12;
}

char *str_cpy(char *d, char *s)
{
	char *r = d;
	while(*d++ = *s++);
	return r;
}
