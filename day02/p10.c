#include <stdio.h>
#include <stdlib.h>

//WAP max of 3 nos.
int main(int argc, char *argv[])
{

	double quantity;		//input
	double rate;			//input
	double amount;		//output
	double discount;

	//input data
	fprintf(stdout, "quantity: ");
	fscanf(stdin, "%lf", &quantity);
	fprintf(stdout, "rate    : ");
	fscanf(stdin, "%lf", &rate);

	//process data
	//>30 discount 10%
	//>50 discount 15%

	amount = quantity * rate;
	discount = 0;
	if(quantity > 50)
	{
		discount = amount *.15;
	}
	else if(quantity > 30)
	{
		discount = amount *.10;
	}

	amount -= discount;
	
	//display results
	fprintf(stdout, "amount: %lf", amount);

	//exit main
	exit(0);
}

