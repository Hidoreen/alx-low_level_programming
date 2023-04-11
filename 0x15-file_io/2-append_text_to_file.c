#include "main.h"

/**
 * append_text_to_file - appends text at end of file
 * @filename: name of the file
 * @text_content: a null terminated string
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len;

	if (filename == NULL)
		return (-1);
	len = 0;

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);
	if (w == -1 | 0 == -1)
		return (-1);
	close(o);
	return (1);
}
