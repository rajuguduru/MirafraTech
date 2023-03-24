#include<stdio.h>
union my
{
int x;
int y;
}you;

int main()
{
you.x=20;
printf("x=%d,y=%d",you.x,you.y);
you.y=30;
printf("x=%d,y=%d",you.x,you.y);
}
