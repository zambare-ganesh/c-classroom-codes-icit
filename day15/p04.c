#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//malyalam
//madam
//was it a cat i saw
int main(int argc, char *argv[])
{
	char text[128] = "wo";
	char str[128] = "How much wood would a woodchuck chuck";
	char *plocation;
	int count = 0;
	char *s = str;

	while(plocation = strstr(s, text), plocation != NULL)
	{
		s = plocation + 1;
		++count;
	}

	fprintf(stdout, "[%s] occurs in [%s] [%d] times\n", text, str, count);

	/*exit main */
	exit(0);
}

