#include "main.h"

/**
 * puts2 - prints every other character in a string
 * @str: check every other char
 * Return : 0 is success
 */

void puts2(char *str)
{
	int d;

	for (d = 0; str[d] != '\0'; d++)
	if (d % 2 == 0)
		_putchar(str[d]);
	_putchar('\n');
}
