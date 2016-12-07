#include "holberton.h"
/**
 * append_text_to_file - append text to file
 * @filename: file to append to
 * @text_content: string of content to append
 *
 * Return: 1 on succes, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, err, byte;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	byte = 0;
	while (text_content[byte])
		byte++;
	err = write(fd, text_content, byte);
	if (err == -1)
		return (-1);

	close(fd);
	return (1);
}
