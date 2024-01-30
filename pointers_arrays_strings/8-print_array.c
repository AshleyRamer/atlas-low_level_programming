#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array of integers
 * @a: array being printed
 * @n: number of ints to print
 */

void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		if (k == 0)
			printf("%d", a[k]);
		else
			printf(", %d", a[k]);
	}
		printf("\n");
}
