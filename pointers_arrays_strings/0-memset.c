#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @n: bytes to be changed
 * @s: starting address of memory to be filled
 * @b: desired value
 * Return: changed array w/ new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
