#include "main.h"

/**
* reverse_array - A code that reverses the content of an array of integers
* @a: array of integers to be reversed
*
* @n: the number of elements of the array
*/

void reverse_array(int *a, int n)
{
	int x;
	int v;

	for (x = 0; x < n--; x++)
	{
		v = a[x];
		a[x] = a[n];
		a[n] = v;
	}
}
