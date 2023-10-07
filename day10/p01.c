#include <stdio.h>
#include <stdlib.h>

void no_inword(int no);
void amount_in_words(int no);
int main(int argc, char *argv[])
{
	int no = 1234567890;

	//input data
	while(fprintf(stdout, "\nno :"), fscanf(stdin, "%d", &no), no > 0)
	{
		amount_in_words(no);
	}


	return 0;
}

void amount_in_words(int no)
{
	static int pos;
	if(no == 0)
		return;
	if(++pos == 2)
	{
		amount_in_words(no/10);
		no_inword(no%10);
	}
	else
	{
		amount_in_words(no/100);
		no_inword(no%100);
	}
	switch(pos)
	{
		case 2:
			fprintf(stdout, " hundred "); break;
		case 3:
			fprintf(stdout, " thousand "); break;
		case 4:
			fprintf(stdout, " lacks "); break;
		case 5:
			fprintf(stdout, " crore "); break;
	}
	--pos;
}

void no_inword(int no)
{
	switch(no / 10)
	{
		case 2:
			fprintf(stdout, "twenty "); break;
		case 3:
			fprintf(stdout, "thirty "); break;
		case 4:
			fprintf(stdout, "forty "); break;
		case 5:
			fprintf(stdout, "fifty "); break;
		case 6:
			fprintf(stdout, "sixty "); break;
		case 7:
			fprintf(stdout, "seventy "); break;
		case 8:
			fprintf(stdout, "eighty "); break;
		case 9:
			fprintf(stdout, "ninety "); break;
	}
	if(no > 20)
		no %= 10;
	switch(no)
	{
		case 1:
			fprintf(stdout, "one"); break;
		case 2:
			fprintf(stdout, "two"); break;
		case 3:
			fprintf(stdout, "three"); break;
		case 4:
			fprintf(stdout, "four"); break;
		case 5:
			fprintf(stdout, "five"); break;
		case 6:
			fprintf(stdout, "six"); break;
		case 7:
			fprintf(stdout, "seven"); break;
		case 8:
			fprintf(stdout, "eight"); break;
		case 9:
			fprintf(stdout, "nine"); break;
		case 10:
			fprintf(stdout, "ten"); break;
		case 11:
			fprintf(stdout, "eleven"); break;
		case 12:
			fprintf(stdout, "twelve"); break;
		case 13:
			fprintf(stdout, "thirteen"); break;
		case 14:
			fprintf(stdout, "fourteen"); break;
		case 15:
			fprintf(stdout, "fifteen"); break;
		case 16:
			fprintf(stdout, "sixteen"); break;
		case 17:
			fprintf(stdout, "seventeen"); break;
		case 18:
			fprintf(stdout, "eighteen"); break;
		case 19:
			fprintf(stdout, "ninteen"); break;
	}
}
