#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"
#include <syscall.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * append_text_to_file - appends a string to a file
 * @filename: name of file to be appended to
 * @text_content: the string to be written into the file
 * Description - appends a string to a file
 * Return: -1, if fail, 1 if success
*/

int append_text_to_file(const char *filename, char *text_content)
{
	long int fd_open;
	long int fd_write;
	long int fd_close;

	if (filename == NULL)
		return (-1);
	fd_open = open(filename, O_WRONLY | O_APPEND);

	if (fd_open == -1)
		return (-1);
	if (text_content != NULL)
	{
		fd_write = write(fd_open, text_content, _strlen(text_content));
		if (fd_write == -1)
			return (-1);
	}

	fd_close = close(fd_open);

	if (fd_close == -1)
		return (-1);

	return (1);
}

/**
 * _strlen - computes the length of a string
 * @str: string whose length is to be computed
 * Description - computes length of string
 * Return: integer, length of string
*/

int _strlen(char *str)
{
	int i;
	int lenn;

	i = 0;
	lenn = 0;

	while (str[i] != 0)
	{
		lenn++;
		i++;
	}
	return (lenn);
}
