#include <stdio.h>

/**
 * main - The code prints alphabets in lowercase
 * Return: 0 (Always)
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
