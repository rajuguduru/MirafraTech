#include<stdio.h>
#include<stdlib.h>

typedef struct process
{
	int pid;
	struct process *next;		
}process;

process* createnode(void)
{
	process*new=(process*)malloc(sizeof(process));
	printf("enter the process id:\n");
	scanf("%d",&new->pid);
	new->next=NULL;
	return new;
}
void printll(process *temp)
{
	if(temp==NULL)
	{
		printf("No Linked List Found\n");
		exit(0);
	}
	while(temp)
	{
		printf("%d ",temp->pid);
		temp=temp->next;
	}
	printf("\n");
}

int main()
{
	process *head=NULL,*new=NULL,*last=NULL;
		while(1)
		{
			printf("1.Do you want create node\n2.print\n");
			int n=0;
			scanf("%d",&n);
		switch(n)
		{
			if(n==1)
			{
				new=createnode();
				if(head==NULL)
				head=new;
				else
				{
					last->next=new;
				}
				last=new;
			}
			else
				printll(head);	
		}
		}	
}
