#include<stdio.h>
void strncopy(char *d,const char *s,int n)
{
	int i=0;
	while(i<n)
	{
	*d++=*s++;
	i++;
	}
	*d=0;
}
int main()
{
	char d[100];
	char s[100];
	int n;
	printf("enter the source string:");
	scanf("%[^\n]s",s);
	printf("enter the no.of chrcts to copy:\n");
	scanf("%d",&n);
	strncopy(d,s,n);
	printf("destination string is :%s\n",d);
}

