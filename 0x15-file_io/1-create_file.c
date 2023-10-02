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
	int fd_open1;
	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fd_open1 = open(filename, O_WRONLY | O_CREAT, S_IWUSR | S_IRUSR);
		if (fd_open1 == -1)
			return (-1);
	}
	else if (text_content != NULL)
	{
		fd_open2 = open(filename, O_WRONLY, S_IWUSR | S_IRUSR)
		if (fd_open2 != 1)
		{
			close (filename);
			fd_open2 = open(filename, O_WRONLY | O_TRUNC);
		}
	}

}
