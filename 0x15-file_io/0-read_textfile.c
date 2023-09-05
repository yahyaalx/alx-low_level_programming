#include "main.h"
/**
 * read_textfile - reads a file and prints it to the standard output
 * @filename: file to be read
 * @letters: size of the buffer of text to be printed
 * Return: size of characters printed, 0 on error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
int i;
int y;
char *buf;
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	i = read(fd, buf, letters);
	if (i < 0)
	{
		free(buf);
		return (0);
	}
	buf[i] = '\0';
	close(fd);
	y = write(STDOUT_FILENO, buf, i);
	if (y < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (y);
}
