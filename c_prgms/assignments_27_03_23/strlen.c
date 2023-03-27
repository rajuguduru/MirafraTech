#include<stdio.h>
int mystrlen_array(char s[])
{
	int i,count=0;
	for(i=0;s[i]!=0;i++)
	{
		count++;
	}
	return count-1;
}

int mystrlen_pointer(char *s)
{
	int count=0;
	while(*s)
	{
		count++;
		s++;
	}
	return count-1;
}
int main()
{
	char s[100];
	printf("enter the string:\n");
	scanf("%[^\n]s",s);
	printf("strlen_a=%d\n",mystrlen_array(s));
	printf("strlen_p=%d\n",mystrlen_pointer(s));
}
