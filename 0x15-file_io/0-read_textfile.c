#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- A program that reads a text file print to STDOUT
 *
 * @filename: the text file being read
 * @letters: the number of letters to be read
 *
 * Return: w- actual number of bytes read and printed
 *        0 when the function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *cal;
	ssize_t del;
	ssize_t m;
	ssize_t v;

	del = open(filename, O_RDONLY);
	if (del == -1)
		return (0);
	cal = malloc(sizeof(char) * letters);
	v = read(del, cal, letters);
	m = write(STDOUT_FILENO, cal, v);

	free(cal);
	close(del);
	return (m);
}
