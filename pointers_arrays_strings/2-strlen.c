#include "main.h"

/**
 * _strln - return length of string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
