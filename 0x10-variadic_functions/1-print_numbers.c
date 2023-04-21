#include "variadic_functions.h"

/**
 * print_numbers - prints a sequence of numbers
 * @separator: a string to separte the numbers with
 * @n: the number of args
 *
 * Return: Nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	if (n == 0)
		return;

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL && (i + 1) != n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
