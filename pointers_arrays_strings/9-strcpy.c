#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies string pointed to from src to dest
 * @src: string to copy
 * @dest: points to string to copy
 * Return: return pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
