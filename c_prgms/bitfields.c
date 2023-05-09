#include<stdio.h>
struct bitfield
{
char a:2;
char b:3;

}bf;
int main()
{
bf.a=3;
bf.b=7;
printf("%d\n%d\n",(bf.a&0x3),bf.b&0x7);
}
