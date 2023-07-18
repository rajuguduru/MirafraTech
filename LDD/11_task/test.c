/*write/insert/push the string "technologies" after the string "Mirafra" before the string "Hyderabad"  and read all.
   o/p: "Mirafra technologies Hyderabad"(1 and 3 are same)
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
	char buff[35]="Mirafra Hyderabad ";
	char buf[]="Technologies";
	char nbuf[100];
//	char newbuf[35]="....";
	fd=open("/dev/My_driver",O_RDWR);
//	fd=open("a.text",O_RDWR);
	if(fd<0)
	{
		printf("open failed\n");
	}
	write(fd,buff,strlen(buff));
	lseek(fd,8,SEEK_SET);
	write(fd,buf,strlen(buf));
	read(fd,nbuf,sizeof(nbuf));
	printf("%s",nbuf);
	close(fd);
}
