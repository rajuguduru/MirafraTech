#include<stdio.h>
struct mirafra
{
char lab;
int floor;
int *p;
struct xyz
{
int d;
int *ptr;
}st;
};
int main()
{
struct mirafra tech;
scanf("%d%c",&tech.floor,&tech.lab);
scanf("%d%d",&tech.st.d,tech.st.ptr);
printf("lab-%c\n",tech.lab);
printf("f-%d\n",tech.floor);
printf("p-%d\n",*(tech.p));
printf("d-%d\n",tech.st.d);
printf("-in=%d\nin=%d",tech.st.d,*(tech.st.ptr));
}
