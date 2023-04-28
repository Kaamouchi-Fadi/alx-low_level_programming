#include<stdio.h>

/**
 * Starter - Apply the constructor attribute to Starter() so that it
 *   is executed before main()
 */
void Starter(void) __attribute__ ((constructor));

/**
 * Starter - implementation of myStartupFun
 */
void Starter(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
