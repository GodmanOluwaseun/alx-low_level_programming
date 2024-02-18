#ifndef MAIN_H
#define MAIN_H

#define BUFF_SIZE 1024

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define COPY_MACRO_FD1_TO_BUFF_TO_FD2 \
{ \
    while ((bytes_read = read(fd, buff, BUFF_SIZE)) > 0) \
    { \
        bytes_written = write(fd2, buff, bytes_read); \
        if (bytes_written != bytes_read) \
        { \
            close(fd2); \
            close(fd); \
            dprintf(STDERR_FILENO,  "Error: Can't write to %s\n", argv[2]); \
            exit(99); \
        } \
    } \
    if (bytes_read < 0) \
    { \
        close(fd); \
        close(fd2); \
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]); \
        exit(98); \
    } \
}

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */
