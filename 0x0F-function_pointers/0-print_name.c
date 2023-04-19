#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints the name as is
 * @name: the name as string
 * @f: function pointer to code
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		exit(98);
	f(name);
}
