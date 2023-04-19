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
	int s, k;

	s = atoi(argv[1]);
	k = atoi(argv[3]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

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

	printf("%d\n", calc(s, k));

	return (0);
}
