#include "main.h"

/**
 * print_line - forms a straight line
 *
 * Retrn: none
 */
void more_numbers(void)
{

int a, z;
	for (a = 1; a <= 10; a++)
	{
		for (z = 0; z <= 14; z++)
		{
			if (z >= 10)
			_putchar('1');
			_putchar(z % 10 + '0');
		}
			_putchar('\n');
		}
}
