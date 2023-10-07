#include <stdio.h>
#define low 0
#define high 5
#define change 2

int i=low;

int main()
{
	auto int i=high;
	reset(i/2); fprintf(stdout, "i : %d\n", i);		//5
	reset(i=i/2); fprintf(stdout, "i : %d\n", i);	//2
	i=reset(i/2); fprintf(stdout, "i : %d\n", i);	//5

	workover(i); fprintf(stdout, "i : %d\n", i);	//

	return 0;
}

int workover(int i)
{
	i=(i%i)*((i*i)/(2*i) + 4);
	fprintf(stdout, "workover: i : %d\n", i);
	return(i);
}

int reset(int i)
{
	i=i<=change ? high : low;
	return(i);
}
