#include "main.h"

/**
* _strncat - A code that concatenates two strings
*
* using at most n bytes from src
*
* @dest: The string to be appended upon
*
* @src: The string to be appended to dest
*
* @n: The number of bytes from src to be appended to dest
*
* Return: a pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int m;
	int k;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[m] = src[k];
		m++;
		k++;
	}
	dest[m] = '\0';
	return (dest);
}
