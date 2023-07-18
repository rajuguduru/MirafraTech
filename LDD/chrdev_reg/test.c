#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
	int fd;
	char buff[30]="Mirafra Hyderabad Technologies";
	fd=open("/dev/My_driver",O_RDWR);
	if(fd<0)
	{
		printf("open failed\n");
	}
	read(fd,buff,strlen(buff)+1);
	write(fd,buff,strlen(buff)+1);
	close(fd);
}
