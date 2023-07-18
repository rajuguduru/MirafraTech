/*7. wap to initialize 1k stars (1024 *'s) into the driver and come back to 10th position and write "sree embedded" 
   and go to the 100th position and write the string "Technologies" then read the complete string and display from app?

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
	char buff[1024];
	char m[]="Mirafra";
	char t[]="Technologies";
	for(int i=0;i<1023;i++)
	{
		buff[i]='*';
	}
	fd=open("/dev/My_driver2",O_RDWR);
	if(fd<0)
	{
		printf("open failed\n");
	}
	write(fd,buff,strlen(buff));
	lseek(fd,10,SEEK_SET);	
	write(fd,m,strlen(m));
	lseek(fd,100,SEEK_SET);	
	write(fd,t,strlen(t));
	lseek(fd,0,SEEK_SET);	
	read(fd,buff,strlen(buff));
	printf("Receievd String: %s",buff);
	close(fd);	
}

