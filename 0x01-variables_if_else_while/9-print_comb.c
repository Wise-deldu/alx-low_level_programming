#include <stdio.h>

/**
 * main - A code that prints all combination of single digits
 * Return: 0 (Always)
 */
int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
		++n;
	}

	putchar('\n');
	return (0);
}
