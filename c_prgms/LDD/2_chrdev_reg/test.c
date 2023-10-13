#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
	int fd;
	char buff[30]="Mirafra Technologies Hyderabad";
	char newbuf[30]="....";
	fd=open("/dev/My_driver2",O_RDWR);
//	fd=open("a.text",O_RDWR);
	if(fd<0)
	{
		printf("open failed\n");
	}
	write(fd,buff,strlen(buff));
	lseek(fd,7,SEEK_SET);
	read(fd,buff,sizeof(buff));
	printf("%s",buff);
	close(fd);
}
