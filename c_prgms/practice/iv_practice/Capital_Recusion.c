#include<stdio.h>
char c_recursion(char *s)
{
	static char c=0;
	if((*s==0)&&c!=0)
		return c;
	if((*s>=65)&&(*s<=90))
	{
		c=*s;
	}
	c_recursion(s+1);
}

int main()
{
	char s[20]="howAreyou";

	printf("%c",c_recursion(s));
}
