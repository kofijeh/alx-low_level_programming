#include "main.h"

/**
 * _print_rev_recursion - prints string recursivly in reverse
 * @s: string parameter
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s - _print_rev_recursion(s - 1);
			s++;
			}
