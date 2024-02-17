#include<stdio.h>

int main()
{
	int n,i,j,k;
	printf("enter the number of elements\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
/*	for(i=0;i<n;i++)  // Array Sorting
	{
		for(j=i+1;j<n;j++)
		{	
			if(a[i]>a[j])
			{
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	
*/	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				int l=j;
				for(int k=j+1;k<n;k++,l++)
				{
					a[l]=a[k];
				}			
					n--;
					j--;
			}	
		}
	}
	for( i=0;i<n;i++)
	{
		printf("%d ",a[i]);	
	}
}
