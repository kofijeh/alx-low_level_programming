#include "main.h"

/**
 * _pow_recursion - raises a value by power of another input
 * @x: first integer
 * @y: number to be raised power to
 * Return: value of x to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1);
}
