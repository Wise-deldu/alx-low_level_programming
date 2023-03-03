#include "main.h"

/**
* string_toupper -A code that changes all lowercase
*
* letters of a string to uppercase
*
* @str: The string to be changed
*
* Return: A pointer to the changed string
*/

char *string_toupper(char *str)
{
	int k;

	k = 0;
	while (str[k] != '\0')
	{
		if (str[k] >= 'a' && str[k] <= 'z')
			str[k] = str[k] - 32;
		k++;
	}
	return (str);
}
