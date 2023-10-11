#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
	unsigned short day: 5;	
	unsigned short month: 4;	
	int year: 23;	
} Date;
typedef struct {
	short rollno;
	char *name;
	char gender;
	Date dob;
	short marks[4];
	short mtotal;
}Student;


void show_bits(unsigned n, int pos);
unsigned dton(Date d);
Date ntod(unsigned n);

int main( int argc, char *argv)
{
	Date d1;

	d1.day = 19;
	d1.month = 1;
	d1.year = 1969;
	fprintf(stdout, "sizeof(Date): %d\n", sizeof(d1));
	fprintf(stdout, "d1 : %02hd-%02hd-%04hd\n", 
							d1.day, d1.month, d1.year);
	//exit main
	exit(0);
}


unsigned dton(Date d)
{
	unsigned no = d.year << 9;
	no |= d.month << 5;
	no |= d.day;
	return no;
}

Date ntod(unsigned n)
{
	Date d;
	d.day = n & 31;
	d.month = (n & (15 << 5)) >> 5;
	d.year = (n & ~((15 << 5) | 31)) >> 9;
	return d;
}

void show_bits(unsigned n, int pos)
{
	if(pos == 0) return;
	if(pos == -1) pos = sizeof(n) * 8;

	show_bits(n/2, --pos);
	fprintf(stdout, "%c%d", ((pos == 27 || pos == 23)?' ': '\0'), n %2);
}

