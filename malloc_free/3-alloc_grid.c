#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - returns pointer with 2D integers
 * @width: columns
 * @height: rows
 * Return: pointer to 2D array
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int r, c, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **)malloc(sizeof(*arr) * height);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			while (i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
	}

	for (r = 0; r < height; r++)
		for (c = 0; c < width; c++)
			arr[r][c] = 0;

	return (arr);
}
