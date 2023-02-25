#include "main.h"

/**
* print_line - A function that draws a straight line in the terminal
* @n: number of times the character _ should be printed
*/

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
