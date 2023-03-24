#include<stdio.h>
int main()
{
int x=20;
int y=21;
int *a=&x,*b=&y;
printf("x add=%p\n",&x);
printf("y add=%p\n",&y);
if((a-b)==-1)
printf("Bottom approach\n");
else
printf("Top approach\n");
}
