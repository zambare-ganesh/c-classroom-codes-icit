#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
	short day;	
	short month;	
	int year;	
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
int cmp_dates(Date d1, Date d2);

int main( int argc, char *argv)
{
	Date d1 = {19, 1, 1969};
	Date d2 = {19, 1, 1969};
	fprintf(stdout, "%02hd-%02hd-%4d\n", d1.day, d1.month, d1.year);
	fprintf(stdout, "%02hd-%02hd-%4d\n", d2.day, d2.month, d2.year);

	int ret = cmp_dates(d1, d2);

	if(ret > 0)
		fprintf(stdout, "d1 > d2\n");
	else if(ret < 0)
		fprintf(stdout, "d1 < d2\n");
	else 
		fprintf(stdout, "d1 == d2\n");
	//exit main
	exit(0);
}

int cmp_dates(Date d1, Date d2)
{
	return dton(d1) - dton(d2);
}

unsigned dton(Date d)
{
	//no = year * 10000 + month * 100 + day;
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

