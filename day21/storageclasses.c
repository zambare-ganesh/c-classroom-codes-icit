#include <stdio.h>
#include <stdlib.h>

int g;			//extern storage class (global scope)
int ga[30];		//accessible across modules
				//g is stored in data section
				//ga is unitialized array. stored in bss.
				//dies when program execution ends.
				//default value is 0
				//memory location is decided at compile time.

static int sm;	//static storage class.
				//module scope. accessible anywhere in this module.
				//live through out the program execution.
				//memory location is decided at compile time.

int main(int argc, char *argv[])
{
	double x;		//auto storage class. default value is garbage.
	double y;		//accessible within funcion main only. block scope.
	double. *pt;	//dies when main function ends.
					//memory location is decided at run time.

	static int sx;	//static storage class. default value is 0.
					//accesible within main function only. block scope
					//dies when main function end.
					//memory location is decided at compile time.
	
	register int r;	//register storage class.
					//if cpu register is avialable stored in cpu register.
					//other wise check avaibility of fastest posiible
					//accesible memory region. if not avialable it is just
					//auto variable.
					//memory location is decided at run time.

	//exit main
	exit(0);
}

void f()
{
	double x;		//auto storage class. default value is garbage.
	double z;		//accessible within funcion f() only. block scope.
	double. *pt;	//dies when function f() ends.
					//memory location is decided at run time.

	static int sx;	//static storage class. default value is 0.
					//accesible within function f() only. block scope
					//dies when function f() ends.
					//memory location is decided at compile time.
	
	register int t;	//register storage class.
					//if cpu register is avialable stored in cpu register.
					//other wise check avaibility of fastest posiible
					//accesible memory region. if not avialable it is just
					//auto variable.
					//accesible within function f() only. block scope
					//dies when function f() ends.
					//memory location is decided at run time.
}

