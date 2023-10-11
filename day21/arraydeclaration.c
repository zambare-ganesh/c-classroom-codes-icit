#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int x = 9;
	//double da[];						//invalid. u should specify size.
	//double da[] = {3.13, 2.7, 6.9};	//valid size is 3.
	double da[10];			//size should be const expression as per c89.
	//double da[x];			//c99 allows variable length arrays for 
							//auto storage class.
	double td[6][3];		//two dimensional array on stack.

	//one dimensional array can accessed as follows.
	//da[i]  : element at ith location.
	//da[i]  : *(da + i)
	//&da[i] : address of ith element.
	//&da[i] : (da + i)
	//&da[0] : (da + 0) : da :  array name represents address of 
	//							first element in the array.
	//							also called as base address.

	//two dimensional arrays can be accessed as follows
	//td[i][j] : element at the ith row and jth column.
	//td[i][j] : *(td[i] + j) : *(*(td + i) + j)
	//&td[i][j]: address of element at the ith row and jth column. 
	//&td[i][j]:  (td[i] + j) :  (*(td + i))

	//common mistakes
	double x[10];
	double y[10];
	char s[30];
	char *t = "ganesh";
	//x = {10, 20 , 30};	//invalid. you cannot change base address.
	//s = "ganesh";			//of an array on stack.
	//x = y;				//again same mistake.
	//s = t;				//we cannot copy entire array.
	//array elements should be copied one by one using loop.
	//in case of strings use strcpy.
	//fscanf(stdin, "%s", &s);		//s : &s[0] hence &s : &(&s[0])
	fscanf(stdin, "%s", &s[0]);	//correct. //when we use %s operator
	fscanf(stdin, "%s", s);		//correct. //to scan strings. simply
										   //pass string name or
										   //address of first element.
	char *name;
	double *px;
	//fscanf(stdin, "%s", name); //may lead to segmentation fault
	//fscanf(stdin, "%lf", px);	 //uninitialized pointer

	//fscanf(stdin, "%lf", &px); //doesnt make any sense as px is
								 //pointer itself.

	//mistakes while passing array to a function.
	//f(x[10]);		//wrong
	//f(x[]);		//wrong
	//f(&x[0]);		//correct. we cannot pass entire array.
	//f(x);			//coreect. we should pass address of first element.

	//if we want to modify a variable in called function we should pass
	//address of the variable.

	//exit main
	exit(0);
}

//void f1(double p[30])	//these three
//void f1(double p[])		//prototypes
void f1(double *p)			//are same
{
}

//void f1(double *pa[30])	//these three
//void f1(double *pa[])		//prototypes
void f1(double **pa)		//are same
{
}


