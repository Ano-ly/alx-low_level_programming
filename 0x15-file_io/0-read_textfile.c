#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"
#include <syscall.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard
 * output
 * @filename: name of file to be read
 * @letters: number of bytes to be read
 *
 * Definition - reads a certain number of bytes of a text file and
 * writes it to standard output
 * Return: number of bytes read and printed, 0, if function failed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *note;
	long int fd_read;
	long int fd_write;
	long int fd_open;

	if (filename == NULL)
		return (0);
	fd_open = open(filename, O_RDONLY);

	if (fd_open == -1)
		return (0);
	note = malloc(letters);

	if (note == NULL)
		return (0);
	fd_read = read(fd_open, note, letters);
	fd_write = write(STDOUT_FILENO, note, fd_read);

	if ((fd_write == -1) || (fd_write != fd_read))
		return (0);
	free(note);
	close(fd_open);


	return (fd_read);
}
