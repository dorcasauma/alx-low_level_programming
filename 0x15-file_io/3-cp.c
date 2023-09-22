#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFSIZE 1024

void error_exit(const char *message) {
    dprintf(STDERR_FILENO, "Error: %s\n", message);
    exit(1);
}

int main(int argc, char *argv[]) {
    int fd_from, fd_to;
    ssize_t bytes_read, bytes_written;
    char buffer[BUFSIZE];

    if (argc != 3) {
        error_exit("Usage: cp file_from file_to");
    }

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1) {
        error_exit("Can't read from file");
    }

    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1) {
        error_exit("Can't write to file");
    }

    while ((bytes_read = read(fd_from, buffer, BUFSIZE)) > 0) {
        bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written == -1 || bytes_written != bytes_read) {
            error_exit("Can't write to file");
        }
    }

    if (bytes_read == -1) {
        error_exit("Can't read from file");
    }

    if (close(fd_from) == -1) {
        error_exit("Can't close fd");
    }

    if (close(fd_to) == -1) {
        error_exit("Can't close fd");
    }

    return 0;
}
