#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 *
 * @filename: Name of the file.
 * @text_content: NULL-terminated string to add at the end of the file.
 *
 * Description: refer to the first commeeted out line
 *
 * Return: 1 on success, -1 on failure.
 * If filename is NULL or text_content is NULL, return -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fileDES, writing;

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}

	fileDES = open(filename, O_WRONLY | O_APPEND);
	if (fileDES == -1)
	{
		return (-1);
	}

	writing = write(fileDES, text_content, strlen(text_content));
	close(fileDES);

	if (writing == -1)
	{
		return (-1);
	}

	return (1);
}
