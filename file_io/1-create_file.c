#include "main.h"

/**
 * create_file - Function that create a file
 * @filename: the name of the file
 * @text_content: a null terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr, len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	while (text_content[len] != '\0')
		len++;

	wr = write(fd, text_content, len);
	if (wr != len)
		return (-1);

	if (len == -1)
		return (-1);

	return (1);
}
