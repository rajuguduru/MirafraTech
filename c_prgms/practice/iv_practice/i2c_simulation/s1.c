#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
#include<signal.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>  
#include <sys/ipc.h>
#include <sys/shm.h>
#define SHM_SIZE 1024
#define KEY 4440

int pid_master;
char *shmaddr;
void signal_handler_ack(int signum) 
{
	int fd=-1;
	int rd;
	fd=open("filem",O_RDWR);
	if(fd==-1)
		printf("open fail s1\n");
	rd=read(fd,&pid_master,4);
	if(rd==-1)
		printf("read fail s1\n");

	kill(pid_master,SIGUSR1);
}

void signal_handler_data(int signum) 
{
	int shmid;
	shmid = shmget(KEY, SHM_SIZE, 0666);
	if (shmid == -1) {
		perror("shmget");
		exit(EXIT_FAILURE);
	}
	shmaddr = shmat(shmid, NULL, 0);
	if (shmaddr == (void *)-1) {
		perror("shmat");
		exit(EXIT_FAILURE);
	}

	printf(" %s\n", shmaddr); 
	kill(pid_master,SIGUSR1);
}

int main()
{

	int pid_s1=getpid();
	printf("slave address(s1) : %d\n",pid_s1);
	signal(SIGUSR2, signal_handler_ack);
	signal(SIGUSR1, signal_handler_data);
		while(1)
		{
		}	
}
