#include "main.h"

/**
 * append_text_to_file - A program that appends text at the end of a file
 *
 * @filename: A pointer to the name of the file.
 * @text_content: The string that needs to be included at the end of the file.
 *
 * Return: If the function fails or filename is NULL - (-1)
 *         If the file does not exist the user lacks write permissions - (-1)
 *         Otherwise - (1).
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, writ, dis = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (dis = 0; text_content[dis];)
			dis++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	writ = write(op, text_content, dis);

	if (op == -1 || writ == -1)
		return (-1);

	close(op);

	return (1);
}
