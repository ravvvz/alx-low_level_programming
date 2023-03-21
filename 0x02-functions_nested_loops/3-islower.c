#include "main.h"

/**
 * _islower - checks if num is lower
 * @c: int variable prameter for _islower function
 *
 * Return: 1 if c is lowercase and 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
