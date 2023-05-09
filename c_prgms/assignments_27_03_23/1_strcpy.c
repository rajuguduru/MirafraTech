#include<stdio.h>
void strcopy(char *d,const char *s)
{
	while(*d++=*s++);
}
int main()
{
	char d[100];
	char s[100];
	printf("enter the source string:");
	scanf("%[^\n]s",s);
	strcopy(d,s);
	printf("destination string is :%s\n",d);
}

