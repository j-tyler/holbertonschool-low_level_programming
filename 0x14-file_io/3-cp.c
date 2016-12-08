#include "holberton.h"
/**
 * main - copy the content of one file to another
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0
 */
int main(int ac, char **av)
{
	int fdr, fdw, err, bytes;
	char buf[BUFFERSIZE];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	if (av[1] == NULL)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	if (av[2] == NULL)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	fdr = open(av[1], O_RDONLY);
	if (fdr == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	fdw = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fdw == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	err = bytes = 1;
	while (bytes)
	{
		bytes = read(fdr, buf, BUFFERSIZE);
		if (bytes == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		if (bytes > 0)
		{
			err = write(fdw, buf, bytes);
			if (err == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	}
	err = close(fdr);
	if (err == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdr), exit(100);
	err = close(fdw);
	if (err == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdw), exit(100);
	return (0);
}
