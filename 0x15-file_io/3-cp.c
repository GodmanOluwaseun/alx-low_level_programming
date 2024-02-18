#include "main.h"
#include <string.h>

/**
* main - Program that copies the content of a file to another file.
* @argc: Argument counts.
* @argv: Argument variables.
* Return: 0
*/

int main(int argc, char *argv[])
{
	int fd, fd2, fd3, fd4;
	char buff[BUFF_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 < 0)
	{
		close(fd);
		dprintf(STDERR_FILENO,  "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((bytes_read = read(fd, buff, BUFF_SIZE)) >= 0)
	{
		bytes_written = write(fd2, buff, bytes_read);

		if (bytes_written != bytes_read)
		{
			close(fd2);
			close(fd);
			dprintf(STDERR_FILENO,  "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (bytes_read < 0)
	{
		close(fd);
		close(fd2);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd3 = close(fd);
	if (fd3 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd3);
		exit(100);
	}

	fd4 = close(fd2);
	if (fd4 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd4);
		exit(100);
	}
	exit(0);
}
