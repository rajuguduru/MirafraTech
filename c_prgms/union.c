#include<stdio.h>
union my
{
int x;
int y;
}you;

int main()
{
you.x=20;
printf("x=%d\n,y=%d\n",you.x,you.y);
you.y=30;
printf("====>\nx=%d\n,y=%d\n",you.x,you.y);
}
