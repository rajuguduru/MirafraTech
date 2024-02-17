#include<stdio.h>
void string_reverse(char *s,char *e);

void string_reverse(char *s,char *e)
{
	char temp;
	if(s>=e)
		return;
	temp=*s;
	*s=*e;
	*e=temp;
	return string_reverse(++s,--e);
}	

int main()
{
	char s[10]="Mirafra";
	char *e=s;
	for(;*e!=0;e++);
	string_reverse(s,e-1);
	printf("%s",s);
}
