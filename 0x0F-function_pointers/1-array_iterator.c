#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a param
 * @array: the array
 * @size: size of the datatype of array
 * @action: the function pointer
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL && size > 0)
	{
		unsigned int i;

		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
