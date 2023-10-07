#include <stdio.h>
#include <stdlib.h>

void swap(double *px, double *py);

int main(int argc, char *argv[])
{
	double x = 3.14;
	double y = 2.7;

	fprintf(stdout, "x : %lf, y: %lf\n", x, y);
	swap(&x, &y);
	fprintf(stdout, "x : %lf, y: %lf\n", x, y);

	//exit main
	exit(0);
}

void swap(double *px, double *py)
{
	double temp;
	temp = *px;
	*px = *py;
	*py = temp;
}

