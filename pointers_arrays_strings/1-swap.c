#include "main.h"

/**
 * swap_int - swaps integers a and b
 * @a: first int
 * @b: second int
 * Return: none
 */

void swap_int(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
