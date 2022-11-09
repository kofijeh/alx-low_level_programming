#include "main.h"
#include <stdlib.h>

/**
 * create_array - Allocates memory using malloc.
 * @b: the number of bytes to be allocated.
 * Return: A pointer to memory
 */
void *create_array(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
