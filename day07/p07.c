//write a function to calculate factorial of given no
#include <stdio.h>
#include <stdlib.h>

double f1(double ankush, double abhijeet);
double f2(double x, double y);	
//double f1(double no1, double no2);
//auto variables are created on stack
//stack grows and shrinks alongwith function callss and returns
int main(int argc, char *argv[])
{
	double x = 1;
	double y = 2;

	fprintf(stdout, "main: &x: %u\nmain: &y: %u\n", &x, &y);
	//*when a function is called actual parameters are copied 
	//to formal parameters
	//before copieng program counter is pushed on the stack
 	f1(x, y);	
	fprintf(stdout, "calling f2 from main\n");
 	f2(10, x);		//10 and x in main are actual parameters

	//exit main
	exit(0);
}

double f1(double x, double y)	//formal parameters	
{
	x = 10;
	y = 20;
	fprintf(stdout, "f1  : &x: %u\nf1  : &y: %u\n", &x, &y);
	fprintf(stdout, "calling f2 from f1\n");
	f2(3, x);
	return 100;
}

double f2(double x, double y)	
{
	x = 10;
	y = 20;
	fprintf(stdout, "f2  : &x: %u\nf2  : &y: %u\n", &x, &y);
	return 100;
}
