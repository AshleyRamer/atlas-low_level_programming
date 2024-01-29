#include "main.h"

/**
 * print_numbers - prints numbers 0123456789
 * Return: none
 */
void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
