#include<stdio.h>

int main()
{
	int n,i,j,p1=0,p2=0,p=0;
	printf("enter the no of elements:\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if((a[i]*a[j])>p)
			{
				p=a[i]*a[j];
				p1=a[i];
				p2=a[j];
			}
		}

	}
	printf("%d and %d is maximum product\n",p1,p2);
}
