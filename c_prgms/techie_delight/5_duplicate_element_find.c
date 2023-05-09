#include<stdio.h>

int main()
{
	int n;
	printf("enter the number of elements:\n");
	scanf("%d",&n);
	int a[n],i,j;
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{	
				printf("reapted element :%d",a[i]);
				break;
			}

		}
	}
}
