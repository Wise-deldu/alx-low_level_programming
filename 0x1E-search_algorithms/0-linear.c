#include "search_algos.h"

/**
 * linear_search - searches for a value in an array integers
 * using the Linear search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @value: the value to search for
 * @size: the number of elements in the array
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
