#include "main.h"
#include <stdlib.h>

/**
 * create_array - array of chars
 * @size: size of array
 * @c: stores stings of chars
 * Return: pointer to base char
 */

char *create_array(unsigned int size, char c)
{
	sizt_t i;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(char) * size);
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return(p);
}
