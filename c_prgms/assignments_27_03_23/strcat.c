#include<stdio.h>
void mystrcat(char *d,const char *s)
{
	while(*d)
	{
		d++;
	}
	while(*d++=*s++);
}
int main()
{
	char s[100];
	char d[100];
	printf("enter the source string:\n");
	scanf("%[^\n]s",s);
	printf("enter the destination string:\n");
  	scanf(" %[^\n]s",d);
	mystrcat(d,s);
	printf("%s",d);
}
