#include<stdio.h>

int main()
{
	int a=10;
//int *p=&a;
//int *q=&b;
//int *c=&arr;

	int b=20;
	int arr[3]={3,4,5};
	int (*p)[3]=&arr[0];
	printf("%p\n",p);
	p++;
	printf("%p\n",p);
	
	

}
