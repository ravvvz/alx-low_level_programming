#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: the number of arguments received
 * @argv: array of pointer to strings
 *
 * Return: Always 0. (Success)
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", *argv++);
	}

	return (0);
}
