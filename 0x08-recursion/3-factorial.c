#include "main.h"

/**
 * factorial- displays factorial of numbers
 * @n: integer to generate factorial
 * Return: Factorial of number
 */
int factorial(int n)
{
	if (n < 1)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
