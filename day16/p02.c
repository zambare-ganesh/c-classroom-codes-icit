#include <stdio.h>
#include <stdlib.h>
char* str_str(const char *s1, const char *s2);
int main(int argc, char *argv[])
{
	char *haystack = "find a needle in haystack";
	char *needle = "needle";
	
	fprintf(stdout, "%u: %s\n", haystack, haystack);
	fprintf(stdout, "%u: %s\n", needle, needle);
	fprintf(stdout, "\"%s\" found in \"%s\" at location %u\n", needle, haystack, str_str(haystack, needle));
	
	//exit main
	exit(0);
}

char* str_str(const char *s1, const char *s2)
{
	int i;
	int j;
	i = 0;
	while(s1[i] != '\0')
 	{
		j = 0;
		while(s1[i + j] == s2[j])
		{
			if(s2[j] == '\0')
			{
				return &s1[i];
			}
			++j;
		}
		if(s2[j] == '\0')
		{
			return &s1[i];
		}
		++i;
	 }
	 return NULL;
}
