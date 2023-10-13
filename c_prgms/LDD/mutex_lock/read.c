#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
	int fd;
	char buff[27];
	fd=open("/dev/My_driver2",O_RDONLY);
	if(fd<0)
	{
		printf("open failed\n");
	}
	read(fd,buff,27);
	printf("%s\n",buff);
	close(fd);
}
