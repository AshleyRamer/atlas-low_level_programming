#include "main.h"

/**
 * more_numbers - prints 0 to 14
 *
 * Return: nothing
 */
void more_numbers(void)
{
int a, r;

for (a = 0; a < 10; a++)
{
for (r = 0; r <= 14; r++)

{
if (r > 9)
{
_putchar((r / 10) + '0');
}
_putchar((r % 10) + '0');
}
_putchar(10);
}
}
