#include "main.h"

/**
 * read_textfile - Function that reads a text file and prints it to the
 * POSIX standard output.
 * @filename: Path to file.
 * @letters: Count of letters.
 * Return: Count of letters, or 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buff[letters + 1];
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
	{
		perror("access_file");
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		perror("open");
		return (0);
	}

	bytes_read = read(fd, buff, letters);
	if (bytes_read < 0)
	{
		perror("read");
		close(fd);
		return (0);
	}

	buff[bytes_read] = '\0';

	bytes_written = write(STDOUT_FILENO, buff, letters);
	if (bytes_written < 0 || bytes_written < bytes_read)
	{
		perror("write");
		close(fd);
		return (0);
	}

	close(fd);
	return (bytes_read);
}
