#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: to be printed between the strings
 * @n: number of strings passed
 *
 * Return: Nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap, bp;
	unsigned int i;

	va_start(ap, n);
	va_copy(bp, ap);

	for (i = 0; i < n; i++)
	{
		if (va_arg(ap, char *) != NULL)
		{
			printf("%s", va_arg(bp, char *));
		}
		else
			printf("(nil)");

		if (separator != NULL && (i + 1) != n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
	va_end(bp);
}
