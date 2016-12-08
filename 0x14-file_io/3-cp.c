#include "holberton.h"
/**
 * _write_to_err - write to std error two strings concatonated
 * @s1: string 1
 * @s2: string 2
 */
void _write_to_err(char *s1, char *s2)
{
	char arr[256];
	int i, j;

	i = j = 0;
	while (s1[i])
		arr[i] = s1[i], i++;
	while (s2[j])
		arr[i] = s2[j], i++, j++;
	arr[i] = '\n';

	write(2, arr, i);
}
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
	char buf[1204];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (ac != 3)
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);
	if (av[1] == NULL)
		dprintf(2, "Error: Can't read from file %s\n", av[1]), exit(98);
	if (av[2] == NULL)
		dprintf(2, "Error: Can't write to %s\n", av[2]), exit(99);
	fdr = open(av[1], O_RDONLY);
	if (fdr == -1)
		dprintf(2, "Error: Can't read from file %s\n", av[1]), exit(98);
	fdw = open(av[2], O_WRONLY | O_CREAT | O_APPEND, mode);
	if (fdw == -1)
		dprintf(2, "Error: Can't write to %s\n", av[2]), exit(99);

	err = bytes = 1;
	while (bytes)
	{
		bytes = read(fdr, buf, 1204);
		if (bytes == -1)
			dprintf(2, "Error: Can't read from file %s\n", av[1]), exit(98);
		if (bytes > 0)
		{
			err = write(fdw, buf, bytes);
			if (err == -1)
				dprintf(2, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	}
	err = close(fdr);
	if (err == -1)
		dprintf(2, "Error: Can't close fd %d\n", fdr);
	err = close(fdw);
	if (err == -1)
		dprintf(2, "Error: Can't close fd %d\n", fdw);
	return (0);
}
