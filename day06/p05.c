#include <stdio.h>
#include <stdlib.h>

void show_bits(unsigned char no);

int main(int argc, char *argv[])
{
	//declare variable
	unsigned char no;
	unsigned char no1;
	unsigned char no2;
	unsigned char mask = 1LU;
	int bytes = sizeof(no);
	int bits = bytes * 8;


	/*
	while(fprintf(stdout, "\nno1: "), fscanf(stdin, "%hu", &no1), no1 != 0)
	{
		fprintf(stdout, "\nno2: ");
		fscanf(stdin, "%hu", &no2);
		fprintf(stdout, "no1      : ");
		show_bits(no1);
		fprintf(stdout, "\nno2      : ");
		show_bits(no2);
		fprintf(stdout, "\nno1 | no2: ");
		show_bits(no1 | no2);
		fprintf(stdout, "\nno1 & no2: ");
		show_bits(no1 & no2);
		fprintf(stdout, "\nno1 >> 1 : ");
		show_bits(no1 >> 1);
		fprintf(stdout, "\nno2 << 1 : ");
		show_bits(no2 << 1);
		fprintf(stdout, "\nno2 << 2 : ");
		show_bits(no2 << 2);
	}
	*/
	while(fprintf(stdout, "\nno: "), fscanf(stdin, "%hu", &no), no != 0)
	{
		//process data
		mask = 1LU;
		fprintf(stdout, "mask     : ");
		show_bits(mask);
		mask <<= (bits - 1);
		fprintf(stdout, "\n(mask <<= (bits - 1)\nmask     :  ");
		show_bits(mask);
		fprintf(stdout, "\nmask     : ");
		while(mask)
		{
			show_bits(mask);
			fprintf(stdout, "\nno       : ");
			show_bits(no);
			fprintf(stdout, "\n-------------------\nmask & no: ");
			show_bits(mask & no);
			fprintf(stdout, " : %hu : %hu\n-------------------\nmask     : ", mask & no, (mask & no) != 0);
			//fprintf(stdout, "%d", no);
			//fprintf(stdout, "%d", (mask & no) != 0);
			mask >>= 1;
		}
	}
	//exit main
	exit(0);
}
void show_bits(unsigned char no)
{
	unsigned char mask = 1LU;
	int bytes = sizeof(no);
	int bits = bytes * 8;
	mask <<= (bits - 1);
	while(mask)
	{
		fprintf(stdout, "%d", (mask & no) != 0);
		mask >>= 1;
	}
}
