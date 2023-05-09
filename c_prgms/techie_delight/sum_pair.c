#include<stdio.h>

int main()
{
	int n,i,j,x,p1=0,p2=0,sum=0;
	printf("enter the no.of elements:\n");
	scanf("%d",&n);
	printf("enter the array elements:\n");
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the target number(sum):\n");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			sum=(arr[i]+arr[j]);
			if(sum==x)
			{	
				p1=arr[i];
				p2=arr[j];
			}
		}	
	}
	if(p1==0&&p2==0)
	{
		printf("pair not found\n");
	}
	else
		printf("pair of %d and %d is %d",p1,p2,x);
}
