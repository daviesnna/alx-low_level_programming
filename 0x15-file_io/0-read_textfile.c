#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - A  code that prints it to POSIX-stdouts an output.
 * @filename: A file description or A pointer to the name of the file.
 * @letters: The number of letters and the
 *           function that we can read and print.
 *
 * Return: Number of bytes or letters, 0 otherwise incase
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *bfr;

	if (filename == NULL)
		return (0);

	bfr = malloc(sizeof(char) * letters);
	if (bfr == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, bfr, letters);
	w = write(STDOUT_FILENO, bfr, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(bfr);
		return (0);
	}

	free(bfr);
	close(o);

	return (w);
}
