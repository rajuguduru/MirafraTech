#include<stdio.h>

int reverse_bits(int n)
{
	int i=0,j=31;
	for(i=0,j=3;i<j;i++,j--)
	{
		if((n&(1<<i))!=(n&(1<<j)))
		{	
			n=n^(0x1<<i);
			n=n^(0x1<<j);
		}
	}
		return n;
}


int main()
{
	int n;
	printf("enter the number:\n");
	scanf("%d",&n);
	printf("%x",reverse_bits(n));
	
}
