#include <stdio.h>
#include <stdlib.h>

//storage classes:	specifies where varaibles are stored 
//					and variables scope and lifetime.
//run time variables: memory location of these variables is decided
//			: at run time. they are destroyed at the end of block
//			: where they are defined.
//			: default value is undefined (garbage value).
//			: should be defined at the start of block.
//			: c99 alloows to define these variables anywhere inside the block.
// auto		: auto variables are created on stack.
//			: they are visible within the block where they are defined.
//			: formal parameters are also auto variables.
//			: when auto variables are created stack grows.
//			: auto is default storage class within a block.
//			: stack shrinks at the end of block and auto variables are destroyed.
// register	: register variables are also run time variables.
//			: traditionaly they are stored in cpu registers.
//			: the c standard says register variables should be located 
//			: in available fastest access memory area.
//			: it may be cpu register, cache memory.
//			: if fastes access memory is not available, they are 
//			: just auto varaibles
//			: register variables are usually used as counters.
//compile time variables: the memory location is decided at compile time.
//			: their life ends when the process exits.
//			: they are located in data section.
//			: default value is zero.
// static	: static variables are visible inside the block or module
//			: where they are defined. they retain value after end of
//			: block
// extern	: extern variables (referred as global variables)
//			: they are visible across all modules in the program.
//			: extern variables are defined once but can be declared
//			: multiple times.
//			: avoid use o extern or static unless and other wise required.
//			: above statement may be false in some contexts.

//functions : default scope is extern.
//			: to hide the function from other modules use static keyword.

//homework:
//1.declare variables having different storage classes in function main, f1, f2...
//	print the addresses. observe and conclude.
//2.declare a global register variable and compile the code.
//3.try to print address of register variable.
//4.c puzzle book. go through all topics we learned. 
//	register int x;

//Tuesday 23 August 2016 exam
//c quiz: 8:30 am to 9:30 am. based on all topics learned till 20th August 2016
//	cpuzzle book
//	schaum series: pdf page 175, 176 (book pages 166, 167)
//Lab Evaluation: 10:00 am 1:00 pm.
//	1. input sunrise and sunset. find day time. (without using function)
//	2. check whether the year is leap or not.
//	3. four function calculator.
//	4. no of days in given month, year.
//	5. julian day of given date.
//	6. print fibonacci primes beteeen given range.
//	7. print all prime factors of given number.
//	8. fibonacci series using static variables.
//	9. day of week of given date.
// 10. print binary representation of given number/character.
//note	: question 2 to 10 using functions.
//		: exams are for your self evaluation.

void dummy();

static int x;
static int y = 30;
int main(int argc, char *argv[])
{
	dummy();
	++y; ++x;
	dummy();
	++y; ++x;
	dummy();
	++y; ++x;
	dummy();
	//exit main
	exit(0);
}

void dummy()
{
	static int z = 10;
	int i = 10;
	++z;
	++i;
	fprintf(stdout, "x: %d, y: %d, z: %d, i: %d\n", x, y, z, i);
}

