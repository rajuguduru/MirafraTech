#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int prime;
	int coprime;
	struct student *next;
}student;
student * createnode(int p,int c)
{
	student *new=(student *)malloc(sizeof(student));
	new->prime=p;
	new->coprime=c;
	new->next=NULL;
	return new;

}
void printll(student *p)
{
	while(p)
	{
		printf("%d %d\n",p->prime,p->coprime);
		p=p->next;
	}
}
int isPrime(int num) 
{
	if(num < 2) 
	{
		return 0;
	}
	for(int i = 2; i <= num/2; i++) 
	{
		if(num % i == 0) 
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	char c;
	student *H=NULL,*new=NULL,*L=NULL;
	int i;
		for(i=2;i<=100;i++)
		{
			if(isPrime(i)&&isPrime(i+2))
			{
				new=createnode(i,i+2);
				if(!H)
				{
					H=new;
				}
				else
				{
					L->next=new;
				}
				L=new;
			}
		}
	printll(H);
}

