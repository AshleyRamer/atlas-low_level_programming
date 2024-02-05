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
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		y--;
	}
	return (dest);
}
