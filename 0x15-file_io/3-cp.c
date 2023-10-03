#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"
#include <syscall.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * main - copies the content ot one file into another
 * @argc: number of arguments supplied
 * @argv: array of arguments passed to main
 * Definition - Usage: cp file1 file2
 * Return: 0
*/

int main(int argc, char *argv[])
{
	long int fd_open1;
	long int fd_open2;
	long int fd_read;
	long int fd_write;
	long int fd_close;
	char *buffer;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if ((argv[1] == NULL) | (argv[2] == NULL))
		exit(96);
	fd_open1 = open(argv[1], O_RDONLY);
	if (fd_open1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_open2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY | O_APPEND,
	S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH);
	if (fd_open2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	buffer = malloc(1024);

	fd_read = read(fd_open1, buffer, 1024);
	/*printf("fd_read: %ld\n", fd_read);*/
	if (fd_read == -1)
	{
		free(buffer);
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	while (fd_read != 0)
	{
		fd_write = write(fd_open2, buffer, fd_read);
		/*printf("Justcalled write, fd_write: %ld", fd_write);*/
		if (fd_write == -1)
		{
			free(buffer);
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		fd_read = read(fd_open1, buffer, 1024);
		/*printf("fd_read: %ld\n", fd_read);*/
		if (fd_read == -1)
		{
			free(buffer);
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
	}
	fd_close = close(fd_open1);
	if (fd_close == -1)
	{
		free(buffer);
		dprintf(2, "Error: Can't close fd %ld\n", fd_open1);
		exit (100);
	}
	fd_close = close(fd_open2);
	if (fd_close == -1)
	{
		free(buffer);
		dprintf(2, "Error: Can't close fd %ld\n", fd_open2);
		exit (100);
	}
	free(buffer);
	return (0);
}
