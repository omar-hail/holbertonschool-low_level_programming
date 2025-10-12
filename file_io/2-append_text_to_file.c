#include "main.h"

/**
 * append_text_to_file - function that appends at the end of a file
 * @filename: the name of the file
 * @text_content:  the null termination string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY  | O_APPEND);

	if (fd == -1)
	{
		close(fd);
		return (-1);
	}

	if ((!text_content) && (fd != -1))
	{
		close(fd);
		return (1);
	}

	while (text_content[len] != '\0')
		len++;

	wr = write(fd, text_content, len);
	if (wr != len)
		return (-1);

	if (wr == -1)
		return (-1);

	return (1);
}
