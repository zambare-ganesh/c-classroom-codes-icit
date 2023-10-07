/*
	This is a
	multiline
	comment
*/

//this is single line comment

#include <stdio.h>
#include <stdlib.h>

//wap to calculate permiter and area of circle for given radius

#define PI 3.14

int main(int argc, char *argv[])
{
	//declare var
	double radius;		//input
	double perimeter;	//output
	double area;		//output

	//input data
	fprintf(stdout, "radius: ");
	fscanf(stdin, "%lf", &radius);	
	//when u want to modify a variable u should in other function
	//u should pass address of variable

	//process data
	//PI is predefined constant
	perimeter = 2 * PI * radius;
	area = PI * radius * radius;

	//display results
	fprintf(stdout, "perimter: %lf", perimeter);
	fprintf(stdout, "area    : %lf", area);
	
	//exit main
	exit(0);
}
