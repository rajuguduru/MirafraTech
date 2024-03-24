#include<stdio.h>
const int a;
int main()
{
	int *p=&a;
	*p=30;
	printf("%d ",*p);
}
