#include<stdio.h>
void string_reverse(char *s);

void string_reverse(char *s) 
{
        if(*s==0)
                return;
        string_reverse(s+1);
	printf("%c",*s);
	
}    

int main()
{
        char s[10]="Mirafra";
//	for(int i=0;s[i]!=0;i++);
        string_reverse(s);
}

