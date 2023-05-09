#include<stdio.h>
void swap(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%d\nb=%d\n",a,b);
}
int main()
{
	int a=10,b=20;
	printf("Before swap:a=%d\nb=%d\n",a,b);
	swap(a,b);
	return 0;
}
