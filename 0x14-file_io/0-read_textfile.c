#include "holberton.h"
/**
 * read_textfile - read a text file and print it to stdout
 * @filename: filename to read from
 * @letters: number of letters to print
 *
 * Return: number of letters to print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t err, n;
	char *buf;

	buf = malloc(sizeof(*buf) * letters);
	if (buf == NULL)
		return (0);

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	n = read(fd, buf, letters);
	if (n == -1)
	{
		free(buf);
		return (0);
	}
	if (n > 0)
		err = write(STDOUT_FILENO, buf, n);
	if (err < n)
	{
		free(buf);
		return (0);
	}
	err = close(fd);
	if (err == -1)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (n);
}
