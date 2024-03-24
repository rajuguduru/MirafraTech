#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>
#include <fcntl.h>  
#include<string.h>
#include <sys/ipc.h>
#include <sys/shm.h>

#define SHM_SIZE 1024 
#define KEY 4440
#define myfifo "filem"
char *shmaddr;
int c=1;
int address;

void pidmaster(void)
{
	int pid_master;

	pid_master=getpid();
	int fd=-1; 
	fd=open(myfifo,O_RDWR,0777);
	if(fd==-1)
		printf("failed to open in master\n");
	int wr=write(fd,&pid_master,4);
	if(wr==-1)
		printf("failed to write in master\n");
	//close(fd);
}

void shared_region()
{
	int shmid;

	shmid = shmget(KEY, SHM_SIZE, IPC_CREAT | 0666);
	if (shmid == -1) {
		perror("shmget");
		exit(EXIT_FAILURE);
	}

	shmaddr = shmat(shmid, NULL, 0);
	if (shmaddr == (void *)-1) {
		perror("shmat");
		exit(EXIT_FAILURE);
	}
}


void signal_handler(int signum) 
{
	char input,s[100];
	printf("Recieved Ack\n");
	printf("Do you want to enter data(d) or generate a stop(s)\n");
	scanf(" %c",&input);
	if(input=='d')
	{
		//memset(shmaddr, 0, SHM_SIZE);
		printf("Enter your data to send:\n");
		scanf(" %[^\n]s",s);
		strcpy(shmaddr,s);
		kill(address,SIGUSR1);
	}
	if(input=='s')
	{
		kill(address,SIGKILL);
		c=1;
	}
}



int main()
{
	pidmaster();
	signal(SIGUSR1, signal_handler);
	shared_region();			
	while(1)
	{
		if(c==1)
		{
			c=0;
			printf("Enter the slave address to connect:\n");
			scanf("%d",&address);
			pidmaster();
			kill(address,SIGUSR2);

		}
	}	
}
