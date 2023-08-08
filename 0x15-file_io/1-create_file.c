#include "main.h"

/**
 * create_file - A program that creates a file.
 *
 * @filename: A pointer to the name of the file to be created.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - (-1).
 *         Otherwise - (1).
 */

int create_file(const char *filename, char *text_content)
{
	int del, m, cal = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (cal = 0; text_content[cal];)
			cal++;
	}

	del = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	m = write(del, text_content, cal);

	if (del == -1 || m == -1)
		return (-1);

	close(del);

	return (1);
}
