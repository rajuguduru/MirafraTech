#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
	int fd;
	char *buff[3]={"Mirafra ","technologies ","Hyderabad "};
 	char newbuf[50]="....";
	fd=open("/dev/My_driver2",O_RDWR);
	if(fd<0)
	{
		printf("open failed\n");
	}
	for(int i=0;i<3;i++)
	{
		write(fd,buff[i],strlen(buff[i]));
	}
	lseek(fd,0,SEEK_SET);
	read(fd,newbuf,sizeof(newbuf));
	printf("%s\n",newbuf);
	close(fd);	
}

