#include "3-calc.h"

/**
 * main - calculator
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int (*calc)(int, int);
	int s, k, result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	s = atoi(argv[1]);
	k = atoi(argv[3]);

	calc = get_op_func(argv[2]);
	if (calc == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if (((strcmp(argv[2], "/") == 0) || (strcmp(argv[2], "%") == 0))
			&& k == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = calc(s, k);
	printf("%d\n", result);

	return (0);
}
