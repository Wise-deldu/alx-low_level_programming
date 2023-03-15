#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - A function that returns a pointer to a 2
  * dimensional array of integers
  * @width: input
  * @height: input
  * Return: pointer to 2 dim. array
  */

int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **b;

	if (width <= 0 || height <= 0)
		return (NULL);

	b = malloc(sizeof(int *) * height);

	if (b == NULL)
	{
		free(b);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		b[i] = malloc(sizeof(int) * width);

		if (b[i] == NULL)
			for (j = i; j >= 0; j--)
			{
				free(b[j]);
				return (NULL);
			}
	}
	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			b[k][l] = 0;
		}
	}
	return (b);
}
