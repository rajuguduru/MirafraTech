#include<stdio.h>


int main()
{
	int n=10204,sum=0,r=0;

	while(n)
	{
		r=n%10;
		if(r==0)
		{
			r=1;
		}
		sum=(sum*10)+r;
		n=n/10;
	}
		n=sum;
		sum=0;
	while(n)
	{
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}

	printf("%d",sum);
}
