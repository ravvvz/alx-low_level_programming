#include "main.h"

/**
 * _abs - computes the absolute value of integer
 * @c: accepts int datatype param that accepts the int
 *
 * Return: the absolute value of argument passed
 */
int _abs(int c)
{
	if (c < 0)
	{
		c = (-c);
	}

	return (c);
}
