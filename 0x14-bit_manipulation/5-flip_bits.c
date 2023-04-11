#include "main.h"

/**
 * flip_bits - A program that counts the number of bits to flip
 * to get from one number to another
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, num = 0;
	unsigned long int new;
	unsigned long int spec = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		new = spec >> x;
		if (new & 1)
			num++;
	}

	return (num);
}
