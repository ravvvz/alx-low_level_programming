#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of the int
 * @size: number of elements in array
 * @cmp: the comparison function pointers
 *
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		int i;

		i = 0;
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}


	return (-1);
}
