#include "main.h"
#include <stdio.h>

/**
* _strcmp - A code that compares two strings
*
* @s1: The first string
*
* @s2: The second string
*
* Return: int value
*/

int _strcmp(char *s1, char *s2)
{
	int k;

	k = 0;
	while (s1[k] != '\0' && s2[k] != '\0')
	{
		if (s1[k] != s2[k])

		{
			return (s1[k] - s2[k]);
		}
		k++;
	}
	return (0);
}
