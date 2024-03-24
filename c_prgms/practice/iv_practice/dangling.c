#include<stdio.h>
int* myfun(void)
{
	int n=15;
	int *p=&n;
	return p;
}

int main()
{
	int *d=myfun();
	printf("%d",*d); 
	*d=20;
	printf("%d",*d); 
}

