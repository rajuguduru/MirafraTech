#include<stdio.h>
void mystrncat(char *d,const char *s,int n)
{
	int i=0;
	while(*d)
	{
		d++;
	}
	while(i<n)
	{	
		*d++=*s++;
		i++;
	}
	*d=0;
}
int main()
{
	char s[100];
	char d[100];
	int n;
	printf("enter the source string:\n");
	scanf("%[^\n]s",s);
	printf("enter the destination string:\n");
  	scanf(" %[^\n]s",d);
	printf("enter the no.of charcters to cncat:\n");
	scanf("%d",&n);
	mystrncat(d,s,n);
	printf("%s",d);
}

