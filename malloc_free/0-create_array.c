#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * @size: size of the array
 * @c: character that fills the array
 * Return: pointer to base of array
 */

char *create_array(unsigned int size, char c)
{
	size_t i;
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
