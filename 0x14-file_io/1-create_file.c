#include "holberton.h"
/**
 * create_file - create a file
 * @filename: name of the file
 * @text_content: content for the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, err, bytes;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT, mode);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		err = close(fd);
		if (err == -1)
			return (-1);
		return (1);
	}

	err = bytes = 0;
	while (text_content[bytes])
		bytes++;
	if (bytes > 0)
		err = write(fd, text_content, bytes);
	if (err == -1)
		return (-1);
	err = close(fd);
	if (err == -1)
		return (-1);
	return (1);
}
