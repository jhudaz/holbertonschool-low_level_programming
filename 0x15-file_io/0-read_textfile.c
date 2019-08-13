#include "holberton.h"
#include <unistd.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * read_textfile - file that read and print a file
 * @filename: char pointer
 * @letters: structure
 * Return: int
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t rd;
	ssize_t wr;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);

	/*read*/
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	rd = read(1, buff, letters);
	close(fd);

	/*write */
	fd = open(filename, O_WRONLY);
	if (fd == -1)
		return (0);
	wr = write(1, buff, rd);

	if (wr == rd)
		return (wr);

	return (0);
}
