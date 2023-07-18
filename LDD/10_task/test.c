/* write the above strings seperately and read them seperately from the driver.
    (implement write and read consecutively/alternatively)
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
	char *buff[3]={"Mirafra ","technologies ","Hyderabad "};
 	char newbuf[3][20];
	fd=open("/dev/My_driver2",O_RDWR);
	if(fd<0)
	{
		printf("open failed\n");
	}
	for(int i=0;i<3;i++)
	{
		write(fd,buff[i],strlen(buff[i]+1));
	}
	for(int i=0;i<3;i++)
	{
	read(fd,newbuf[i],sizeof(newbuf[i]));
	printf("%s\n",newbuf[i]);
	}
	close(fd);	
}

