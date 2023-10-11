#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//malyalam
//madam
//was it a cat i saw
int main(int argc, char *argv[])
{
	char firstname[128] = "rohit";
	char lastname[128] = "kulange";
	
	//scan_name(name);
	fprintf(stdout, "first name: %s\n", firstname);
	fprintf(stdout, "last  name: %s\n", lastname);
	fprintf(stdout, "sizeof(firstname): %d\n", sizeof(firstname));
	fprintf(stdout, "sizeof(lastname) : %d\n", sizeof(lastname));
	fprintf(stdout, "strlen(firstname): %d\n", strlen(firstname));
	fprintf(stdout, "strlen(lastname) : %d\n", strlen(lastname));
	
	fprintf(stdout, "strcat(firstname, lastname): %s\n", strcat(firstname, lastname));
	fprintf(stdout, "first name: %s\n", firstname);
	fprintf(stdout, "last  name: %s\n", lastname);
	fprintf(stdout, "strcpy(lastname, firstname): %s\n", strcpy(lastname, firstname));
	fprintf(stdout, "first name: %s\n", firstname);
	fprintf(stdout, "last  name: %s\n", lastname);

	fprintf(stdout, "strcmp(\"abcdef\", \"abciex\"): %d\n", strcmp("abcdef", "abciex"));
	fprintf(stdout, "strcmp(\"abcdex\", \"abcdef\"): %d\n", strcmp("abcdex", "abcdef"));
	fprintf(stdout, "strcmp(\"abcdef\", \"abcdef\"): %d\n", strcmp("abcdef", "abcdef"));
	/*exit main */
	exit(0);
}

