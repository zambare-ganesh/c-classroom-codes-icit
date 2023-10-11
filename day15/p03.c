#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//instead of location print the position 
int main(int argc, char *argv[])
{
	int i;
	char ch;
	char name[128] = "rohit";
	char str[128] = "How much wood would a woodchuck chuck";
	char text[128] = "wo";
	int pos;
	char *plocation;

	for(i = 0; name[i] != '\0'; ++i)
	{
		fprintf(stdout, "%d: %u: %c\n", i, &name[i], name[i]);
	}
	ch = 'i';
	plocation = strchr(name, ch);
	if(plocation != NULL)
	{
		fprintf(stdout, "%c found at location %u in [%s]\n", ch, plocation, name);
	}
	else
	{
		fprintf(stdout, "%c not found in [%s]\n", ch, name);
	}
	fprintf(stdout, "%u: %s\n", str, str);
	plocation = strstr(str, text);
	if(plocation != NULL)
	{
		fprintf(stdout, "%s found at location %u in [%s]\n", text, plocation, str);
	}
	else
	{
		fprintf(stdout, "%s not found in [%s]\n", text, str);
	}

	/*exit main */
	exit(0);
}

