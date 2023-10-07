#include <stdio.h>
#include <stdlib.h>

//wap to calculate sum of two numbers
int main(int argc, char *argv[])
{
	//declare var
	short no1;		//input
	short no2;		//input
	short sum;		//output

	//input data
	fprintf(stdout, "no1: ");
	fscanf(stdin, "%hd", &no1);
	fprintf(stdout, "no2: ");
	fscanf(stdin, "%hd", &no2);

	//process data
	sum = no1 + no2;
	
	//display results
	fprintf(stdout, "sum: %hd", sum);
	//exit main
	exit(0);
}

//declare var
//declare each var on new line
//variable name should make sense
//comment whether the var is input or output of problem statement
//for learning purpose avoid int, float use short or double
//input data
//pair of pf sf for each variable

//process data
//start writing this at the end

//display results
//pf for each output var

//exit main
/*
----------------------------------
in vi
:!clear && gcc p01.c -o p01 && ./p01
----------------------------------
Note: don't use loops, if else or switch
1. WAP to calculate area and perimeter of a circle of given radius
2. input quantity, rate per unit and discount % and calculate amount
3. write a program (input is 4 digit no.)
	a. display face value of each digit in reverse order
	b. display face value of each digit in forward order
	c. display place value of each digit
	d. display sum of digits.
	e. reverse the number
	(a, b, c printing is part of process)
4. write a program to print table for given numer.
	(here printing is part of process)
*/
/*
	presentation topics
	1. Data Types and ranges: raghav
	2. variable declaration: radhika
	3. introduction to printf/scanf format specifiers: ankush
	4. printf sacnf format specifiers in detail: mainak
	5. escape sequence: arpita

	presentation will be on saturday.
	radhika will prepare template.
	ganesh sir will give inputs daily 15 minutes to each student.
		a. share book pdf.
		b. which pages to refer in each book.
		c. guidance for demo codes if required.
*/
