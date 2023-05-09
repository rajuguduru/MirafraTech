#include<stdio.h>
static int a=30;
void fun()
{
	printf("%d\n",a);
}
int main()
{
	 static int a=20;
	printf("%d\n",a);
	fun();
}

