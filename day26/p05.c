#include <stdio.h>
#include <stdlib.h>

void scan_array(double *, int n);
void print_array(double *, int n);
int cmp_double(const void *, const void *);
void *lsearch(const void *key, const void *base,
                     size_t nmemb, size_t size,
                     int (*compar)(const void *, const void *));
int main(int argc, char *argv[])
{
	double a[9];
	double key;
	double *location;
	int index;

	scan_array(&a[0], sizeof(a)/sizeof(a[0]));
	qsort(&a[0], 9, sizeof(a[0]), cmp_double);
	print_array(&a[0], 9);

	fprintf(stdout, "key: ");
	fscanf(stdin, "%lf", &key);
	location = lsearch(&key, &a[0], sizeof(a)/sizeof(a[0]), 
								sizeof(a[0]), cmp_double); 

	if(location != NULL)
	{
		index = location - &a[0];
		fprintf(stdout, "%.2lf found in array at index %d\n", key, index);
	}


	//exit main
	exit(0);
}

void scan_array(double *a, int n)
{
	int i;
	char s[128];
	for(i = 0; i < n; ++i)
	{
		a[i] = (rand() * 1.0/RAND_MAX) * 100;
		sprintf(s, "%.2lf", a[i]);
		a[i] = atof(s);
	}
}
void print_array(double *a, int n)
{
	int i;
	for(i = 0; i < n; ++i)
	{
		//fprintf(stdout, "%lf, ", a[i]);
		fprintf(stdout, "%.2lf, ", a[i]);
	}
	fprintf(stdout, "\b\b \n");
}

int cmp_double(const void *pv1, const void *pv2)
{
	double *p1 = (double *)pv1;
	double *p2 = (double *)pv2;

	fprintf(stdout, "%.2lf, %.2lf\n", *p1, *p2);
	if(*p1 > *p2)			return 1;
	else if(*p1 < *p2)		return -1;
	else					return 0;
}

void *lsearch(const void *key, const void *base,
                     size_t nmemb, size_t size,
                     int (*compar)(const void *, const void *))
{
	int i;
	for(i = 0; i < nmemb; ++i)
	{
		if(compar(key, base + i*size) == 0)
		{
			return base + i * size;			
		}
	}	
	return NULL;
}
