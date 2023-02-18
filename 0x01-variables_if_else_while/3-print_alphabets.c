#include <stdio.h>

/**
 * main - A code that prints alphabets in lower and upper case
 * Return: 0 (Always)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
