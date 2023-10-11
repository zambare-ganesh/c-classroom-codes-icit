#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_palindrome(char *s);
int main(int argc, char *argv[])
{
	char *s = "amanaplanacanalpanama";		//input variable

	if(is_palindrome(s))
	{
		fprintf(stdout, "\"%s\" is a palindrome\n", s);
	}
	else
	{
		fprintf(stdout, "\"%s\" is not a palindrome\n", s);
	}

	/*exit main */
	exit(0);
}

int is_palindrome(char *s)
{
	int i = 0;
	int j = 0;
	
	while(s[j] != '\0') ++j;		//find length of string
	--j;							//j = strlen(s) - 1

	while(i < j)
	{
		if(s[i] != s[j])
		{
			return 0;
		}
		++i;
		--j;
	}

	return 1;
}

