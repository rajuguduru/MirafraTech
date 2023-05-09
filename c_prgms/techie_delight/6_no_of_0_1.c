//Given a binary array containing 0’s and 1’s, find the largest subarray with equal numbers of 0’s and 1’s.

#include<stdio.h>

int main()
{
	int n;
	printf("enter the number of elements:\n");
	scanf("%d",&n);
	int a[n],i,j,o=0,z=0,m=1;
	int b[m],x=0,y=0;
	printf("enter the elements 0 or 1 only:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;i++)
		{
			if(a[j]==0)
			z++;
			if(a[j]==1)
			o++;
			int k=i;
			if(z==o&&(z>x&&o>y))
			{
				for(k;k<=j;k++)
				{
					b[m++]=a[k];		
				}	
				x=z;
				y=o;
			}
		}

	}
}
