#include <unistd.h>

/**
 * _putchar - writes a character c to stdout
 * @c: char to be printed
 * Return: On success 1
 */
int_putchar(char c)
{
	return (write(1, &c, 1));
}
