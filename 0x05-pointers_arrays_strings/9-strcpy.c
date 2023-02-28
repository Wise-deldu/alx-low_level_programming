#include "main.h"

/**
* char *_strcpy - A function that copies the string pointed to by src,
* including the terminating null byte (\0), to the buffer pointed to by dest
* @dest: copy to
* @src: copy from
* Return: string
*/

char *_strcpy(char *dest, char *src)
{
	int M = 0;
	int n = 0;

	while (*(src + M) != '\0')
	{
		M++;
	}
	for ( ; n < M ; n++)
	{
		dest[n] = src[n];
	}
	dest[M] = '\0';
	return (dest);
}
