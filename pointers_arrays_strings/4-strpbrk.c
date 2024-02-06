#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches string forany of a set of bytes
 * @s: input
 * @accept: input
 * Return: NULL if character not foud
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
