#include "main.h"

/**
 * create_file - creats a file
 * @filename: the file to be created
 * @text_content: NULL terminated string to write to the file.
 *
 * Return: 1 on success , -1 on failue or file cannot be created|written
 */

int create_file(const char *filename, char *text_content)
{
	int file_descriptor, permissions, n;

	if (!filename)
		return (-1);
	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0200);
	if (file_descriptor == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (n = 0; text_content[n]; n++)
		;
	permissions = write(file_descriptor, text_content, n);
	if (permissions == -1)
		return (-1);
	close(file_descriptor);
	return (1);
}
