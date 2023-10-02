#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"
#include <syscall.h>
#include <fcntl.h>
#include <stdlib.h>


/**
 * create_file - creates a new file
 * @filename: name of file
 * @text_content: initial content
 * Description - creaates a file
 * Return: 1 or -1
*/

int create_file(const char *filename, char *text_content)
{
	int fd_open;
	int fd_write;

	if (filename == NULL)
		return (-1);
	fd_open = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IWUSR | S_IRUSR);

	if (fd_open == -1)
		return (-1);
	if (text_content != NULL)
	{
		fd_write = write(fd_open, text_content, sizeof(text_content));
		if (fd_write == -1)
			return (-1);
	}

	close(fd_open);
	return (1);

}
