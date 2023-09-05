#include "main.h"

/**
 * create_file - creates a file with sertan specs
 * @filename: file to create
 * @text_content: string to write to the file
 * Return: 1 on success -1 on error
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int len;
	int write_bytes;

	len = 0;
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	while (text_content[len])
	{
		len++;
	}
	write_bytes = write(fd, text_content, len);
	if (write_bytes == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
