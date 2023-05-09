#include<stdio.h>

int atoi(char str[]);
int main()
{
	//	char str[10]="100";
	char str[10];
	scanf("%10[^\n]s",str);
	printf("Asic to integer :%d\n",atoi(str));
}

int atoi(char str[])
{
	int i=0,sum=0,sign=1;
	
	if(str[0]=='-')
	{
		sign=-1;
		i++;
	}

	for(;str[i]!='\0';i++)
	{
		if(str[i]>='0'&&str[i]<='9')
		{
			sum=sum*10+str[i]-48;
		 if(!(str[i+1]>='0'&&str[i+1]<='9'))
			break;
		}
	}
	return sum*sign;

}
