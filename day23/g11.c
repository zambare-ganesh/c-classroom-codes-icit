#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
	short day;	
	short month;	
	short year;	
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
	Date d1 = {19, 1, 1969};
	Date d2;
	show_bits(dton(d1), -1);
	fprintf(stdout, "\n");
	//d2 = ntod(dton(d1));
	unsigned temp = dton(d1);
	d2 = ntod(temp);

	fprintf(stdout, "d2 : %02hd-%02hd-%02hd\n", 
							d2.day, d2.month, d2.year);
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

