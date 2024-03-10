#include "main.h"
#include <stdio.h>

/**
 * get_bit - gets bit value
 * @n: number 
 * @index: index starting from 0
 * Return: Value of bit (Success) or -1 (Fail)
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold;

	if (index > 64)
		return (-1);

	hold = n >> index;

	return (hold & 1);
}
