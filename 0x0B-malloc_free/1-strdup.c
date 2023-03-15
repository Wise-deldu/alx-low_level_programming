#include "main.h"
#include <stdlib.h>

/**
  * _strdup - Duplicate a string
  * @str: the string to duplicate
  *
  * Return: the string duplicated
  */

char *_strdup(char *str)
{
	int b = 0;
	int i = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);
	while (b < i)
	{
		s[b] = str[b];
		b++;
	}
	s[b] = '\0';
	return (s);
}
