#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - this function creates a file
 *
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Description: refer to the first commented out line
 * ( + )
 * The created file must have those permissions: rw-------.
 * If the file already exists, do not change the permissions.
 *
 * Return:  1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 */

int create_file(const char *filename, char *text_content)
{
	int fileDES;
	ssize_t writing;

	if (filename == NULL)
	{
		return (-1);
	}

	fileDES = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fileDES == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		writing = write(fileDES, text_content, strlen(text_content));
		if (writing == -1)
		{
			close(fileDES);
			return (-1);
		}
	}
	close(fileDES);
	return (1);
}

