/* write the above strings seperately and read them seperately from the driver.
    (implement write and read consecutively/alternatively)
*/
#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "header.h"
#include<sys/ioctl.h>
int main()
{
	int fd;
	char buff[100];
	int c=10;
	char ch='*';	
	fd=open("/dev/My_driver2",O_RDWR);
	if(fd<0)
	{
		printf("open failed\n");
	}
		ioctl(fd,AUDIO_MM_PLAY,ch);
		//ioctl(fd,AUDIO_MM_RECORD,buff);
		//printf("20 characters from kernelbuffer:%s",buff);
		ioctl(fd,AUDIO_MM_NEXT,c);
	close(fd);	
}

