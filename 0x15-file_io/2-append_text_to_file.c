#include "holberton.h"
#include <unistd.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * _strlen - function that count the number of character in a string
 * @str: char pointer
 * Return: int
*/
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * append_text_to_file - append a text at the end of a file
 * @filename: char pointer
 * @text_content: char pointer
 * Return: int
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int wr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	wr = write(fd, text_content, _strlen(text_content));
	close(fd);
	if (wr == -1)
		return (-1);
	return (1);
}
