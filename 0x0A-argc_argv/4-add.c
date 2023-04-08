#include <stdio.h>

int _atoi(char *s, int *status);
/**
 * main - prints the sum of all positive numbers
 * @argc: the number of strings
 * @argv: array of pointer
 *
 * Return: Always 0. (Success), 1 if otherwise
 */

int main(int argc, char **argv)
{
	int sum = 0;

	if (argc <= 2)
	{
		printf("%d\n", sum);
		return (1);
	}
	else
	{
		int i, num, status = 1;

		for (i = 1; i < argc; i++)
		{
			num = _atoi(argv[i], &status);
			if (status == -1)
			{
				printf("Error\n");
				return (1);
			}
			else
				sum += num;
		}
	}

	printf("%d\n", sum);

	return (0);
}

/**
 * _atoi - convert char to int
 * @s: the string to convert
 * @status: if value if positive or negative
 *
 * Return: total of the addition
 */

int _atoi(char *s, int *status)
{
	int i, num = 0;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
		{
			if (i == 0 && s[i] == '-')
			{
				i++;
				continue;
			}
			else
			{
				*status = -1;
				return (1);
			}
		}
		i++;
	}

	i = 0;
	while (s[i] != '\0')
	{
		if (i == 0 && s[i] == '-')
		{
			i++;
			continue;
		}

		num = (num * 10) + (s[i] - '0');
		i++;
	}

	if (s[0] == '-')
	{
		num *= -1;
	}

	return (num);
}
