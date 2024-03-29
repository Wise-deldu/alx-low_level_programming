#include "main.h"
#include <stdlib.h>

/**
  * create_array - A function that creates an array of chars, and
  * initializes it with a specific char
  * @size: size of array
  * @c: char to assign
  * Description: create array of size and assign char c
  * Return: pointer to array, NULL if fail
  *
  */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
