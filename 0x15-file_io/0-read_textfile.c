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
	void *buff_ptr;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		return (0);
	}

	buff_ptr = malloc(letters + 1);
	if (buff_ptr == NULL)
		return (0);

	bytes_read = read(fd, buff_ptr, letters);
	if (bytes_read < 0)
	{
		free(buff_ptr);
		close(fd);
		return (0);
	}

	((char *)buff_ptr)[bytes_read] = '\0';

	bytes_written = write(STDOUT_FILENO, buff_ptr, bytes_read);
	if (bytes_written < 0 || bytes_written != bytes_read)
	{
		free(buff_ptr);
		close(fd);
		return (0);
	}
	free(buff_ptr);
	close(fd);

	return (bytes_written);
}
