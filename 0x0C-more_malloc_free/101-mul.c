#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * print_error_exit - printss error when found
 *
 * Return: exit(98)
 */

void print_error_exit()
{
	printf("Error\n");
	exit(98);
}


/**
 * multiply - multiply two strings together
 * @num1: the first string
 * @num2: the second string
 *
 * Return: void
 */

void multiply(char *num1, char *num2)
{
	int len1 = strlen(num1), len2 = strlen(num2);
	int result[10000] = {0};
	int i_num1 = 0;
	int i_num2 = 0;
	int i, j;
	char result_str[10000 + 1];


	if (len1 == 0 || len2 == 0)
	{
		printf("0\n");
		return;
	}

	for (i = len1 - 1; i >= 0; i--)
	{
		int carry = 0;
		int n1 = num1[i] - '0';

		i_num2 = 0;

		for (j = len2 - 1; j >= 0; j--)
		{
			int n2 = num2[j] - '0';

			int sum = n1 * n2 + result[i_num1 + i_num2] + carry;
			carry = sum / 10;
			result[i_num1 + i_num2] = sum % 10;

			i_num2++;
		}

		if (carry > 0)
		{
			result[i_num1 + i_num2] += carry;
		}

		i_num1++;
	}

	i = len1 + len2 - 1;
	while (i >= 0 && result[i] == 0)
		i--;

	if (i == -1)
	{
		printf("0\n");
		return;
	}

	j = 0;
	while (i >= 0)
	{
		result_str[j++] = result[i--] + '0';
	}

	result_str[j] = '\0';
	
	for (i = 0; result_str[i] != '\0'; i++)
		_putchar(result_str[i]);
	_putchar('\n');
}

/**
 * main - multiply two strings
 * @argc: agrc counter
 * @argv: argument vectore
 *
 * Return: 0 Success
 */

int main(int argc, char **argv)
{
	char *num1 = argv[1];
	char *num2 = argv[2];
	unsigned int i;

	if (argc != 3)
		print_error_exit();

	for (i = 0; i < strlen(num1); i++)
	{
		if (!isdigit(num1[i]))
			print_error_exit();
	}

	for (i = 0; i < strlen(num2); i++)
	{
		if (!isdigit(num2[i]))
			print_error_exit();
	}

	multiply(num1, num2);

	return (0);
}
