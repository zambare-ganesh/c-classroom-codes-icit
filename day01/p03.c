#include <stdio.h>
#include <stdlib.h>

//data types
//1. premitve
//	a. integral (char, int)
//		char : signed char, unsigned char
//		int  : 
//			   signed short int, signed int, signed long int, signed long long int
//			   unsigned short int, unsigned int, unsigned long int, unsigned long long int

//			   signed.s default i.e. signed is optional
//			   int is optional
//	b. real    
//			 : float, doble, long double
//			   always signed
//2. user defined
//	structure, union, enumeration, typedef

//constants/literals
//	char: 
//			'A', 'P', '@'	
//			'\n', '\r', '\b', '\a', '\t'			//escape sequence
//	int	: 
//			int: 		12, -90
//			long:		12l, -90l
//			long long:	12ll, -90ll
//			for unsigned suffix U is used
//			0x prefix is used for hex representation: 0xC2
//			0 prefix is used for octal representation: 071
//			??? how to represent short int constant/literal ???
//
//	float:
//			float : 1.2f, 37.65f
//			double: 1.2, 37.65
//			long double: ??? find out ???
//			explore scientific notation
int main(int argc, char *argv[])
{
	fprintf(stdout, "\\n: %d\n", '\n');
	fprintf(stdout, "\\r: %d\n", '\r');
	fprintf(stdout, "\\t: %d\n", '\t');
	fprintf(stdout, "\\b: %d\n", '\b');
	fprintf(stdout, "\\a: %d\n", '\a');
	
	fprintf(stdout, "hello!!!\n");
	fprintf(stdout, "hello!!!\ryi\n");
	fprintf(stdout, "hello!!!\b\bi\n");
	//fprintf(stdout, "%d", 080);
	
	//exit main
	exit(0);
}
