#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	write(STDERR_FILENO, "and that piece of art is useful\" - Dora Kopar, 2015-10-19\n", 57);
	return (1);
}
