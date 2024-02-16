#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - function returns value of x to the y pwr
 * @x: base integer
 * @y: power of integer
 * Return: x to the y power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x,--y));
}
