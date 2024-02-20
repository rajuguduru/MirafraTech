#include<stdio.h>

int count_setbits(int n)
{
	static int c=0;
	if(n==0)
		return c;
	if(n&1==1)
		c++;
	count_setbits(n>>1);
}


int main()
{
	int n=7;
	int r=count_setbits(n);
	printf("%d",r);	
}

