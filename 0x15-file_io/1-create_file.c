#include "main.h"
#include <string.h>

/**
 * create_file - Function that creates a file.
 * @filename: Name of file.
 * @text_content: Content to write in file.
 * Return: 1, or -1.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, fd2, len;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd < 1)
	{
		close(fd);
		return (-1);
	}

	if (text_content != NULL)
	{
		len = strlen(text_content);
		fd2 = write(fd, text_content, len);
		if (fd2 < 0)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
