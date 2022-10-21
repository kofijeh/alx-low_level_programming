#include "main.h"

/**
 * _isdigit - checks for digits between 0 and 1
 * @c: character to return
 * Return: returns 1 if true else 0
 */

int _isdigit(int c);
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
