#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p=(int*)malloc(12);
	printf("address of p when malloc : %p\n",p+3);
	*(p+3)=20;

	p=(int*)realloc(p,8);
	printf("address of p when realloc: %p\n",p+3);
	printf("value in the 9th byte of mem =%d\n",*(p+3));
}
