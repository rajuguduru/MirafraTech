/* wap to enter a string from the app. The driver need to reverse the string and send back to the app?

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
	printf("Befor Reverse String== %s\n",buff);
	printf("length=%d",strlen(buff));
	write(fd,buff,strlen(buff));
	read(fd,buff,strlen(buff));
	printf("Reversed String== %s\n",buff);
	close(fd);	
}

