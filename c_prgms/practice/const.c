#include<stdio.h>
int main()
{
	
	int a=20,b=100;
	int * const p=&a;
	p=&b;
	printf("%d\n",*p);	
	printf("%d\n",a);
}
