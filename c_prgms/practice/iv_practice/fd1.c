#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    // Open the file for reading
    int fd_read1 = open("example.txt", O_RDONLY);
    if (fd_read1 == -1) {
        perror("Failed to open file for reading");
        return 1;
    }
    
    // Open the file for writing
    int fd_write = open("example.txt", O_WRONLY);
    if (fd_write == -1) {
        perror("Failed to open file for writing");
        return 1;
    }

    // Read from fd_read1 and write to fd_write
    char buffer[256];
    ssize_t bytes_read;
    while ((bytes_read = read(fd_read1, buffer, sizeof(buffer))) > 0) {
        write(fd_write, buffer, bytes_read);
    }

    // Close the file descriptors
    close(fd_read1);
    close(fd_write);

    return 0;
}

