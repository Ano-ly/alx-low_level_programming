#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <syscall.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - copies the content of one file into another
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
	char *buffer;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if ((argv[1] == NULL) | (argv[2] == NULL))
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_open1 = open(argv[1], O_RDONLY);
	if (fd_open1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_open2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY | O_APPEND,
	S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH);
	if (fd_open2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	buffer = malloc(1024);

	fd_read = read(fd_open1, buffer, 1024);
	func_supplement(fd_read, fd_open1, fd_open2, argv, buffer);
	free(buffer);
	return (0);
}

/**
 * func_supplement - supplements above function
 * @fd_read: bytes read at first
 * @buffer: buffer to be read into
 * @fd_open2: file descriptor
 * @argx: array of arguments
 * @fd_open1: file descriptor
 * Description - completes previous function
 * Return: void
*/

void func_supplement(long int fd_read, long int fd_open1, long int fd_open2,
char *argx[], char *buffer)
{
	long int fd_close;
	long int fd_write;

	if (fd_read == -1)
	{
		free(buffer);
		dprintf(2, "Error: Can't read from file %s\n", argx[1]);
		exit(98);
	}
	while (fd_read != 0)
	{
		fd_write = write(fd_open2, buffer, fd_read);
		if (fd_write == -1)
		{
			free(buffer);
			dprintf(2, "Error: Can't write to %s\n", argx[2]);
			exit(99);
		}
		fd_read = read(fd_open1, buffer, 1024);
		if (fd_read == -1)
		{
			free(buffer);
			dprintf(2, "Error: Can't read from file %s\n", argx[1]);
			exit(98);
		}
	}
	fd_close = close(fd_open1);
	if (fd_close == -1)
	{
		free(buffer);
		dprintf(2, "Error: Can't close fd %ld\n", fd_open1);
		exit(100);
	}
	fd_close = close(fd_open2);
	if (fd_close == -1)
	{
		free(buffer);
		dprintf(2, "Error: Can't close fd %ld\n", fd_open2);
		exit(100);
	}
}
