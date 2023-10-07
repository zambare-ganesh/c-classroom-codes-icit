#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdlib.h>

//explore limits.h
int main(int argc, char *argv[])
{
	fprintf(stdout, "Data Types\n");
	fprintf(stdout, "----------------------------------------------------------------------\n");
	fprintf(stdout, "type\t\tsize\tformat\t\tmin\t\tmax\n");
	fprintf(stdout, "----------------------------------------------------------------------\n");
	fprintf(stdout, "char\t\t%d\t%%c\t\t%d\t\t%d\n", sizeof(char), SCHAR_MIN, SCHAR_MAX);
	fprintf(stdout, "unsigned char\t%d\t%%c\t\t%d\t\t%d\n", sizeof(unsigned char), 0, UCHAR_MAX);
	fprintf(stdout, "short\t\t%d\t%%hd\t\t%d\t\t%d\n", sizeof(short), SHRT_MIN, SHRT_MAX);
	fprintf(stdout, "unsigned short\t%d\t%%hu\t\t%d\t\t%d\n", sizeof(unsigned short), 0, USHRT_MAX);
	fprintf(stdout, "int\t\t%d\t%%d\t\t%d\t%d\n", sizeof(int), INT_MIN, INT_MAX);
	fprintf(stdout, "unsigned int\t%d\t%%u %%o %%x %%i\t%d\t\t%d\n", sizeof(unsigned int), 0, UINT_MAX);
	fprintf(stdout, "long\t\t%d\t%%ld\t\t%ld\t%ld\n", sizeof(long), LONG_MIN, LONG_MAX);
	fprintf(stdout, "unsigned long\t%d\t%%lu\t\t%lu\t\t%lu\n", sizeof(unsigned long), 0lu, ULONG_MAX);
	fprintf(stdout, "float\t\t%d\t%%f %%e %%g\t%g\t%g\n", sizeof(float), FLT_MIN, FLT_MAX);
	fprintf(stdout, "double\t\t%d\t%%lf %%le %%lg\t%lg\t%lg\n", sizeof(double), DBL_MIN, DBL_MAX);
	fprintf(stdout, "long double\t%d\t%%Lf %%Le %%Lg\t%Lg\t%Lg\n", sizeof(long double), LDBL_MIN, LDBL_MAX);

	//exit main
	exit(0);
}
