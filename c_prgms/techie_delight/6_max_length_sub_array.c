#include<stdio.h>

int main()
{
	int n,k=0,counter=0;
	printf("enter the number of elements:\n");
	scanf("%d",&n);
	printf("enter the elements only 1/0 :\n");
	int i,z=0,o=0,p1,p2;
	int l=0,a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		z=0;
		o=0;
		for(int j=i;j<n;j++)
		{
			if(a[j]==0)
				z++;
			if(a[j]==1)
				o++;
			if(o==z&&counter<=z)
			{
				counter=z;
				k=i;
				l=j;	
			}
		}	
	}
	printf("Sub Array of maximum 0's and 1's  in the array:\n");
	for(k;k<=l;k++)
	printf("%d  ",a[k]);
	
}
