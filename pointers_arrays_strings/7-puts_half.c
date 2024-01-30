#include "main.h"

/**
 * puts_half - prints half a string
 * @str: character to check
 * Return: 0 is success
 */

void puts_half(char *str)
{
	int g = 0, n;

	while (str[g] != '\0')
		g++;
	if (g + 1 % 2 != '0')
		n = (g - 1) / 2;
	else
		n = (g / 2);
	n++;

	for (g = n; str[g] != '\0'; g++)
	_putchar(str[g]);
	_putchar('\n');
}
