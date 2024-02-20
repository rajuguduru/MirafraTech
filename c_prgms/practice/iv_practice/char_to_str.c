#include<stdio.h>

int main()
{
	char c,r=0;
	int i=0,j=0;
	char s[100];
	
	while(1)
	{
		printf("enter the charctr\n");
		scanf(" %c",&c);
		s[i++]=c;
		printf("Do u want to continue y/n\n");
		scanf(" %c",&r);
		if(r=='n')
		break;
	}
		s[i]='\0';
	printf("\n%s\n",s);
	
}
