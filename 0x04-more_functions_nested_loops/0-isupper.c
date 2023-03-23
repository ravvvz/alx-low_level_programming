#include "main.h"

/**
 * _isupper - checks if the upper or lower
 * @c: param argument (int)
 *
 * Return: 1 if @c is uppercase, 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
