#include "main.h"

/**
 * array_range - copies range into pointer
 * @min: minimum of range
 * @max: maximum of range
 *
 * Return: int *
 */

int *array_range(int min, int max)
{
	int *int_array;
	int i = 0;

	if (min > max)
		return (NULL);

	int_array = malloc(sizeof(int) * (max - min + 1));
	if (int_array == NULL)
		return (NULL);

	while (min <= max)
	{
		int_array[i] = min;
		i++;
		min++;
	}
	return (int_array);
}
