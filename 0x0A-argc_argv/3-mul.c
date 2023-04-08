#include <stdio.h>

int _atoi(char *s, int *status);
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

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int num1, num2, status0 = 1, status1 = 1;

		num1 = _atoi(argv[1], &status0);
		num2 = _atoi(argv[2], &status1);

		if (status0 == -1 || status1 == -1)
		{
			printf("Error\n");
			return (1);
		}
		else
			mul = num1 * num2;
	}
	printf ("%d\n", mul);

	return (0);
}

/**
 * _atoi - converts a string to intege
 * @s: the string to convert
 * 
 * Return: integer conversion of string
 */

int _atoi(char *s, int *status)
{
	int i, num = 0;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
		{
			*status = -1;
			return (0);
		}
		i++;
	}

	i = 0;
	while (s[i] != '\0')
	{
		if (s[0] == '-')
			i++;
		num = (num * 10) + (s[i] - '0');
		i++;
	}

	if (s[0] == '-')
		num *= -1;

	return (num);
}
