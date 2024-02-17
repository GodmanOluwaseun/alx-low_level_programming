#include "main.h"
#include <string.h>

/**
 * append_text_to_file - Function that appends text at the end of a file.
 * @filename: Name of file.
 * @text_content: Text to append to file.
 * Return: 1, or -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fd2, len;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_APPEND);
	if (fd < 0)
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
