#include<stdio.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

int main()
{
	int fd;

	fd=mkfifo("./filem",0777);
	if(fd==-1)
		printf("file failed to create\n");
	return 0;	
}
