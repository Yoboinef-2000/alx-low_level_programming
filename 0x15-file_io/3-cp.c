#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

#define holderSize 1024

/**
 * print_usage - Print a usage message.
 *
 * @program_name: The name of the program.
 */
void print_usage(char *program_name)
{
	dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", program_name);
	exit(EXIT_FAILURE);
}

/**
 * print_error - Print an error message with the given file name.
 *
 * @error_message: The error message.
 * @file_name: The name of the file related to the error.
 */
void print_error(char *error_message, char *file_name)
{
	dprintf(STDERR_FILENO, "Error: %s %s\n", error_message, file_name);
	exit(EXIT_FAILURE);
}

/**
 * open_file - Open a file with the specified flags and mode.
 *
 * @file_name: The name of the file to open.
 * @flags: The flags to use when opening the file.
 * @mode: The mode to use when creating the file.
 *
 * Return: The file descriptor of the opened file.
 */
int open_file(char *file_name, int flags, mode_t mode)
{
	int fileDes;

	fileDes = open(file_name, flags, mode);
	if (fileDes == -1)
	{
		print_error("Can't open file", file_name);
	}
	return (fileDes);
}

/**
 * read_write_close_files - Read from one file and write
 * to another, then close both files.
 *
 * @file_from: The file descriptor of the source file.
 * @file_to: The file descriptor of the destination file.
 */
void read_write_close_files(int file_from, int file_to)
{
	char holder[holderSize];
	ssize_t reading, writing;

	while ((reading = read(file_from, holder, holderSize)) > 0)
	{
		writing = write(file_to, holder, reading);
		if (writing != reading)
		{
			print_error("Can't write to file", "");
		}
	}
	close(file_from);
	close(file_to);
}

/**
 * main - Main function to copy content from one file to another.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: EXIT_SUCCESS on success, EXIT_FAILURE on failure.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;

	if (argc != 3)
	{
		print_usage(argv[0]);
	}

	file_from = open_file(argv[1], O_RDONLY, 0);
	file_to = open_file(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	read_write_close_files(file_from, file_to);
	return (EXIT_SUCCESS);
}

