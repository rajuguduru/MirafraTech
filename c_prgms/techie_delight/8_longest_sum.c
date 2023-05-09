#include<stdio.h>

int main()
{
	int n,i,j,x,p1=0,p2=0,p=-1,sum=0,count=0;
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
	{	count=0;
		sum=arr[i];
		for(j=i+1;j<n;j++)
		{
			sum+=arr[j];
			count++;
			if(sum==x&&p<count)
			{	p=count;
				p1=i;
				p2=j;
			}
		
		}	
	}
	if(p1==0&&p2==0)
	{
		printf("pair not found\n");
	}
	else
	{
		printf("lonpair is:\n");
		for(p1;p1<=p2;p1++)
		{
			printf("%d ",arr[p1]);
		}
	}
}
