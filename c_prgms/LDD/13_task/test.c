/*6. wap to enter max of 4k bytes into the driver. the driver should not accept more than that max limit.


*/
#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
	int fd;
	char buff[]="Mirafra";
	fd=open("/dev/My_driver2",O_RDWR);
	if(fd<0)
	{
		printf("open failed\n");
	}
	write(fd,buff,strlen(buff));
	read(fd,buff,strlen(buff));
	close(fd);	
}

