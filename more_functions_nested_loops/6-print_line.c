#include "main.h"

/**
 * print_line - forms a straight line
 *@n: variable
 * Retrn: none
 */
void print_line(int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
