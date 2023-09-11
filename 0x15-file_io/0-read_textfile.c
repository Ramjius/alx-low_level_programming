#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
* read_textfile - reads a text file and prints it to the POSIX standard output.
* @filename: text file being read
* @letters: number of letters to read
* Return: w - number of bytes read and printed,
*	0 when function fails or filename is NULL.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t filed;
	ssize_t w;
	ssize_t r;

	filed = open(filename, O_RDONLY);
	if (filed == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	r = read(filed, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	free(buffer);
	close(filed);
	return (w);
}
