#include<stdio.h>
int n = 10;
int main()
{
int n = 4;
for(int i=0;i<5;i++)
{
i=i+0;
printf("n=%d",n);
extern int n;
printf("en=%d",n);
}
}
