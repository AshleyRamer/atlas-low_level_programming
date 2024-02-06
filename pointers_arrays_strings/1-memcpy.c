#include "main.h"

/**
 * _memcpy - copies memory area in function
 * @n: number of bytes
 * @dest: stored memory
 * @src: copied memory
 * Return: byte changed, memory copied
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *x = dest;

	while (n)
	{
		*dest++ = *src++;
		n--;
	}
	return (x);
}
