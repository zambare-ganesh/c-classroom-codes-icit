#include <stdio.h>
#include <stdlib.h>

//write a program to display atm menu and get choice from user.
//rewrite four function calculator using switch case
//no of days for given month, year
//julian day of given date

//#define for error nos.
//avoid printf/scanf satatements in process data
//use stderr while printing errors
int main(int argc, char *argv[])
{
	int choice;;

	//display menu
	fprintf(stdout, "1. Withdrawl\n");
	fprintf(stdout, "2. Mini Statement\n");
	fprintf(stdout, "3. Deposit\n");
	fprintf(stdout, "4. balance Enquiry\n");

	//get choice from user
	fprintf(stdout, "choice: ");
	fscanf(stdin, "%d", &choice);

	//display selected menu
	//case should have const expression
	switch(choice)
	{
		case 1:
			fprintf(stdout, "1. Withdrawl\n");
			break;
		case 1+1:
			fprintf(stdout, "2. Mini Statement\n");
			break;
		case 3:
			fprintf(stdout, "3. Deposit\n");
			break;
		case 4:
			fprintf(stdout, "4. balance Enquiry\n");
			break;
		//case 4:		duplicate case not allowed
		//case 1+3:		duplicate case
		//case 3.14:	only integer constants are allowed
		case -1:
			fprintf(stdout, "dummy selection\n");
			break;
		default:
			fprintf(stdout, "invalid choice\n");
			break;
	}

	//exit main
	exit(0);
}
