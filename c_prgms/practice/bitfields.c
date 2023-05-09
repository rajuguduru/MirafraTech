#include<stdio.h>
//#define pragma pack(1);
struct bf
{
int a:13;
int b:8;
int e:7;
int c:4;
int f;
}b;

int main()
{
printf("b====%p\n",&b);
//printf("a==>13==%p\n",b.a);
//printf("e==>7==%p\n",&b.e);
//printf("c==>8==%p\n",b.c);
printf("di=f====>%p\n",&b.f);
printf("size==>>%ld\n",sizeof(b));
}
