#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two int arguments
 * @argc: the counter of arguments
 * @argv: array of pointer to strings of the arguments
 *
 * Return: 1 if successful and 0 if not
 */

int main(int argc, char **argv)
{
	int mul;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int num1, num2;

		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);

		mul = num1 * num2;
	}
	printf("%d\n", mul);

	return (0);
}
