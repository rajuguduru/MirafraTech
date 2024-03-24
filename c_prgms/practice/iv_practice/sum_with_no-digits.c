/*Find all n-digit numbers with a given sum of digits
  Find all n–digit numbers with a given sum where n varies from 1 to 9 and sum <= 81 (Maximum possible sum in a 9–digit number).*/


#include<stdio.h>


int main()
{
	int target=42,digits=5,n=1;
	//int a[100];
	while(digits>=2)
	{
		n=(n*10);
		digits--;
	}
	int sum=0,next,last;
	last=(n*10);
	while(n<last)
	{
		next=n;
		sum=0;
		while(n)
		{
			sum+=(n%10);
			n=n/10;
			if((n==0)&&(sum==target))
				printf("%d ",next);	

		}
		n=next+1;
	}
}
