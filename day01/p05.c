#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char sch = -1;
	unsigned char uch = 255;
	int si;
	unsigned ui;
	short int x = 300;

	//1111 1111 1111 1111 1111 1111 1111: signed interpretation is -1
	//1111 1111 1111 1111 1111 1111 1111: unsigned interpretation is 4294967295
	//when signed data is copied and target size is wider, 1s are padded to left
	//in following example sch is signed
	//size of char is 8 bits (i byte)
	//-1 is stored in sch as 1111 1111
	//when sch is copied to int (signed/unsigned) 
	//8 bits from sch is copied with 24 1s padded to left
	//----------------------------- 1111 1111
	//1111 1111 1111 1111 1111 1111 1111 1111
	si = sch;
	ui = sch;
	fprintf(stdout, "si: %d, y: %u\n", si, ui);

	//when unsigned data is copied and target size is greater, 0s are padded to left
	//in following example uch is unsigned
	//size of char is 8 bits (i byte)
	//255 is stored in uch as 1111 1111
	//when uch is copied to int (signed/unsigned) 8 bits from sch is copied with 24 0s padded to left

	//----------------------------- 1111 1111
	//0000 0000 0000 0000 0000 0000 1111 1111
	si = uch;
	ui = uch;
	fprintf(stdout, "si: %d, y: %u\n", si, ui);

	//truncation
	//x cannot hold value 90000 as it is wider than 2 bytes
	//upper bytes are truncated
	x = x* x;		
	fprintf(stdout, "x: %hd", x);

	//exit main
	exit(0);
}

