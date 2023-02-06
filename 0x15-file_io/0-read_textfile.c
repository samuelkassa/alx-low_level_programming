#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX and standard
 * output
 * @filename: A pointer for file
 * @letters: The number of letters
 *
 * Return: Case 1:  The actual number of letters it could read and print
 * Case 2: if the file can not be opened or read , return 0
 * Case 3: if filename is NULL return 0
 * Case 4: if write fails or does not write the expected amount of bytes return
 * 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, re, wr;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	re = read(op, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, re);

	if (op == -1 || re == -1 || wr == -1)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(op);

	return (wr);
}
