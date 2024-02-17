#include<stdio.h>

int main()
{
	int n=1;
	
a:	
	printf("%d ",n++);
	if(n<=100)
	goto a;
}
