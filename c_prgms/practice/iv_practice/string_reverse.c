#include<stdio.h>
void strreve(char *s,char *e)
{
	while(s<e)
        {
                char temp =*s;
                *s=*e;
                *e=temp;
                s++;
                e--;
        }
	
}
int main()
{
	char c=0,*e=NULL,s[50]="Mirafra Software Technologies";
	e=s;
	for(;*e;e++);
	strreve(s,e-1);
	printf("%s",s);
	
}
