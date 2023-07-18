#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define DEVICE_PATH "/dev/chardev_example"

int main()
{
    int fd;
    char buffer[256] ="mirafra technologies hyderabad";
    ssize_t bytes_read;

    fd = open(DEVICE_PATH, O_RDWR);
    if (fd < 0) {
        perror("Failed to open the device");
        return 1;
    }
    bytes_read = read(fd, buffer, sizeof(buffer) - 1);
    if (bytes_read < 0) {
        perror("Failed to read from the device");
        return 1;
    }
	lseek(fd,8,SEEK_SET);
	write(fd,buffer,sizeof(buffer)-1);
    printf("Read from device: %s\n", buffer);

    close(fd);
    return 0;
}

