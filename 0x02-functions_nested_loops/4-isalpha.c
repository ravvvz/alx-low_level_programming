#include "main.h"

/**
 * _isalpha - checks if the param is alpha or not
 * @c: accepts a param of type int
 *
 * Return: 1 if letter is lower or alpha, 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}

	return (0);
}
