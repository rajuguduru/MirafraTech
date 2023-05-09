#include<stdio.h>

int main()
{
int n=5,p=3;
n=n^(0x1<<p);
printf("%x",n);
}
