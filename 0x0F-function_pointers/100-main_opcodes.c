#include <stdio.h>
#include <stdlib.h>

/**
 * main - print main's opcode
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int k, i;
	unsigned char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	k = atoi(argv[1]);
	if (k < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr = (unsigned char *)main;
	for (i = 0; i < k; i++)
	{
		printf("%02x", ptr[i]);
		if ((i + 1) == k)
			printf("\n");
		else
			printf(" ");
	}

	return (0);
}
