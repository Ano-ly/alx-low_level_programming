#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <syscall.h>
#include <fcntl.h>
#include <stdlib.h>
#include <elf.h>
#include "main.h"

/**
 * main - attempts to print the elf header
 * @argc: numebr of arguments
 * @argv: array of string arguments
 * Definition - attempts to print the elf header
 * Return: 0
*/

int main(int argc, char *argv[])
{
	long int fd_read;
	long int fd_open;
	long int fd_close;
	Elf64_Ehdr elf_read;
	Elf64_Ehdr *elf_read_p;

	elf_read_p = &elf_read;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: ");
		exit(101);
	}

	fd_open = open(argv[1], O_RDONLY);
	if (fd_open == -1)
	{
		dprintf(STDERR_FILENO, "Error: failed to open file");
		exit(98);
	}
	fd_read = read(fd_open, elf_read_p, 32);
	if (fd_read == -1)
	{
		dprintf(STDERR_FILENO, "Could not read file");
		exit(100);
	}
	fd_close = close(fd_open);
	if (fd_close == -1)
	{
		dprintf(STDERR_FILENO, "Failed to close file");
		exit(99);
	}
	return (0);

}
