#include<stdio.h>
void mystrev(char *s,char *p)
{
	char temp;
	while(s<=p)
	{
		temp=*s;
		*s=*p;
		*p=temp;
		s++;
		p--;
	}
}
int main()
{
	char s[100],*p;
	printf("Enter the string;\n");
	scanf("%s",s);
	p=s;
	for(;*p;p++);
	mystrev(s,p-1);
	printf("reverse=%s",s);
}
