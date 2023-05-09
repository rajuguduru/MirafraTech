#include<stdio.h>

int main()
{
	int x,count=0;
	printf("enter the number:\n");
	scanf("%d",&x);
	while(x)
	{
		if(x&(0x1))
			count++;
		x=x>>1;
	}
	printf("No.of set Bits are:%d\n",count);
}
