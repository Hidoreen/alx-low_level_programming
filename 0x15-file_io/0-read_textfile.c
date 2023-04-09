#include "main.h"

/**
 * read_textfile - reads a text and prints it to the POSIX stdout.
 * @filename:pointer to the file
 * @letters: number od characters to read an print
 *
 * Return: success returns np.of letterss it could readt and print
 * 0 when fails.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int file_descriptor;
	ssize_t r, w;

	if (filename == NULL)
		return (0);
	file_descriptor = fopen(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(filr_descriptor);
		return (0);
	}
	r = read(file_descriptor, buff, letter);
		close(file_descriptor);
	if (r == -1)
	{
		free(buff);
		return (0);
	}
	w = write(STDOUT_FILENO, buff, r);
	free(buff);
	if (r != w)
		return (0);
	returm (w);
}
