#include<stdio.h>
void strcopy(char *d,char *s)
{
	while(*d++=*s++);
}
int main()
{
	char d[100];
	char s[100]="Mirafra Soft.Tech";
	strcopy(d,s);
	printf("dest=%s",d);
}
