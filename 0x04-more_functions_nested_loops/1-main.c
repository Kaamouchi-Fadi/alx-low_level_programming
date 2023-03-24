#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}


2-mul.c

#include "main.h"
/**
 * mul - multiply 2 int
 * @a: first int
 * @b: second int
 * Return: addition of the multiplicattion
 */

int mul(int a, int b)
{
	return (a * b);
}
