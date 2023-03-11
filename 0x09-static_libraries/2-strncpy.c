#include "main.h"

/**
* _strncpy - A function that copies a string
*
* @dest: the buffer storing the string copy
*
* @src: The source string
*
* @n: The maximum number of bytes to be copied from src
*
* Return: a pointer to the resulting string dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int k;

	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}
	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}
	return (dest);
}
