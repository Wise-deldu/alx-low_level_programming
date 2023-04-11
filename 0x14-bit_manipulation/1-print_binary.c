#include "main.h"

/**
 * print_binary - A program that prints the binary equivalent
 * of a decimal number
 *
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
	int v, comp = 0;
	unsigned long int new;

	for (v = 63; v >= 0; v--)
	{
		new = n >> v;

		if (new & 1)
		{
			_putchar('1');
			comp++;
		}
		else if (comp)
			_putchar('0');
	}
	if (!comp)
		_putchar('0');
}
