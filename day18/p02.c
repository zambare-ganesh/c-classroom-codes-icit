#include <stdio.h>
#include <stdlib.h>

/* 
	open another terminal and use following commands
	sudo -i
	echo 0 > /proc/sys/kernel/randomize_va_space
	cat /proc/sys/kernel/randomize_va_space
*/
int main(int argc, char *argv[])
{
	short int x = 10;
	short int *px;
	short int **ppx;

	px = &x;
	ppx = &px;

	fprintf(stdout, "&x: %10u\t&px: %10u\t &ppx: %10u\n", &x, &px, &ppx);
	fprintf(stdout, " x: %10hd\t px: %10u\t  ppx: %10u\n", x,  px,  ppx);
	fprintf(stdout, " x: %10hd\t*px: %10u\t *ppx: %10u\n", x,  *px,  *ppx);
	fprintf(stdout, " x: %10hd\t*px: %10hd\t**ppx: %10hd\n", x,  *px,  **ppx);
	//exit main
	exit(0);
}
