#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: the number of command line arguments passed
 * @argv: array of pointers to the arguments
 *
 * Return: Always 0. (Success)
 */

int main(__attribute__((unused)) int argc, char **argv)
{
	printf("%s\n", *argv);

	return (0);
}
