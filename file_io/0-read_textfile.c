#include "main.h"

/**
 * read_textfile - function that reads a text file and prints
 * @filename: pointer to the file
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
	{
		close(fd);
		return (0);
	}

	rd = read(fd, buf, letters);
	close(fd);
	if (rd == -1)
	{
		free(buf);
		return (0);
	}

	wr = write(STDOUT_FILENO,  buf, rd);
	free(buf);

	if (rd != wr)
		return (0);

	return (wr);
}
