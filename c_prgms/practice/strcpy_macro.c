#include<stdio.h>
#define STR(d[],s[])	while(*d++=*s++);\

int main()
{
char s[100]="mirafra";
char d[100]="technologies";
STR(d,s);

}

