#include<stdio.h>
#define mask  
int main()
{
	int x,i=0,j=1;
	scanf("%x",&x);
	for(i,j;j<=15;j++,i++)
	{
		if((x&(0x1<<i))!=(x&(0x1<<j)))
		{
			x=x^(0x1<<i);
			x=x^(0x1<<j);
		}
	}
	printf("%x",x);
}
