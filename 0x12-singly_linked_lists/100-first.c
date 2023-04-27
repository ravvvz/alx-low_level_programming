#include <stdio.h>

void __attribute__((constructor)) first_print(void);
/**
 * first_print - execute this function first
 *
 * Return: void
 */

void first_print(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
