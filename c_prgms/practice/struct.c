#include<stdio.h>

struct x
{
int a;
char b;
int *p;
}s;

int main()
{
struct x *ptr=&s;
ptr->a=10;
ptr->b=21;
printf("%d\n%d\n",ptr->a,ptr->b);
}
