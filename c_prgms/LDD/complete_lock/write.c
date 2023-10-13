#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
	int fd,i;
	char buff[27];
	fd=open("/dev/My_driver2",O_WRONLY);
	if(fd<0)
	{
		printf("open failed\n");
	}
	for(i=0;i<26;i++)
	{
	buff[i]='A'+i;
	}
	buff[26]='\0';
	write(fd,buff,strlen(buff));
	printf("%s\n",buff);
	close(fd);
}
