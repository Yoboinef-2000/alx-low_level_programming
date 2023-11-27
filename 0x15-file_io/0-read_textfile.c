#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - this is a function that reads a text file
 * and prints it to the POSIX standard output
 *
 * @filename: the text file that is going to be read.
 * @letters: the number of letters it should read and print
 *
 * Description: refer to the first commented out line
 *
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *holder;
	FILE *file;
	ssize_t reading, writing;

	if (filename == NULL)
	{
		return (0);
	}

	file = fopen(filename, "r");
	if (file == NULL)
	{
		return (0);
	}

	holder = malloc(sizeof(char) * (letters + 1));

	if (holder == NULL)
	{
		fclose(file);
		return (0);
	}

	reading = fread(holder, sizeof(char), letters, file);
	if (reading < 0)
	{
		free(holder);
		fclose(file);
		return (0);
	}
	holder[reading] = '\0';
	writing = write(STDOUT_FILENO, holder, reading);
	free(holder);
	fclose(file);

	if (reading != writing)
	{
		return (0);
	}
	return (reading);
}

