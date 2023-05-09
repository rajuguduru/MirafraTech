//Check if a subarray with 0 sum exists or not
#include<stdio.h>

int main()
{
	int n,i=0,j=0,k=0,sum=0;
	printf("enter the number of elements:\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(i=0;i<n;i++)
	{
		sum=0;
		k=i;
		for(j=i;j<n;j++)
		{
			sum+=a[j];
			if(sum==0)
			{
				for(i;i<=j;i++)
					printf("%d  ",a[i]);
				printf("\n");
				i=k;
			}
		}
	}	
}
