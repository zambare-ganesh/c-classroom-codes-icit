#include <stdio.h>
#include <stdlib.h>

int i = 1;
int main()
{
	auto int i, j;

	i = reset();

	for(j = 1; j <= 3; ++j)
	{
		fprintf(stdout, "i: %d, j: %d\n", i, j);
		fprintf(stdout, "next(%d): %d\n", i, next(i));
		fprintf(stdout, "last(%d): %d\n", i, last(i));
		fprintf(stdout, "new(%d): %d\n", i, new(i));
	}
	return 0;
}

int reset()
{
	return i;			//global int i;	
}

int next(int j)
{
	return (j = i++);	//global i incremented
						/// j = i; i = i + 1; return j;
}

int last()
{
	return  i-=1;		//global i decremented
}
int new(int j)
{
	static int i = 10;
	return (j = i--);	//local static i decremented
}


