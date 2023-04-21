#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: the string
 *
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	int i, k;
	char *str;
	va_list ap;

	i = 0;
	va_start(ap, format);
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				k = 1;
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				k = 1;
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				k = 1;
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				k = 1;
				str = va_arg(ap, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
			default:
				k = 0;
				break;
		}
		if (format[i + 1] != '\0' && k == 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
