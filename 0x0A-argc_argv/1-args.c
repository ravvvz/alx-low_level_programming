#include "main.h"

/**
 * main - prints the number of arguments passed in the command line
 * @argc: the number of arguements passed
 * @argv: array of pointers to string
 *
 * Return: Always 0. (Success)
 */

int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);

	return (0);
}
