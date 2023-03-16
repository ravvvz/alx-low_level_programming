#include <unistd.h>
#include <string.h>

/**
 * main - prints a string
 *
 * Return: Always 0
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);

	return (1);
}
