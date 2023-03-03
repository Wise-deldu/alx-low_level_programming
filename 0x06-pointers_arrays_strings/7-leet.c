#include "main.h"

/**
* leet - A function that encodes a string into 1337
*
*@m: The string to encode
*
* Return: The encoded string
*/

char *leet(char *m)
{
	int a = 0, b = 0, l = 5;
	char r[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	while (m[a])
	{
		b = 0;

		while (b < l)
		{
			if (m[a] == r[b] || m[a] - 32 == r[b])
			{
				m[a] = n[b];
			}
			b++;
		}
		a++;
	}
	return (m);
}
