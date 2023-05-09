#include<stdio.h>
int highest_power(int n)
{
	 while(n)
	{
		if((n&(n-1))==0)
		return n;
		else
		{
			n++;   			}
		}
}
int main()
{
	int n,r;
	printf("enter the number:\n");
	scanf("%d",&n);
	r=highest_power(n);	
	printf("highest power around the given number:%d\n",r);
}
