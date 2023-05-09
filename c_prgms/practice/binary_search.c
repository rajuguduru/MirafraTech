#include<stdio.h>

int binary_search(int a[],int l,int r,int x)
{
	while(l<=r)
	{
		int m=(l+(r-l))/2;
		if(a[m]==x)
			return m;
		if(a[m]<x)
			l=m+1;
		else
			r=m-1;
	}	
	return -1;
}


int main()
{
	int n,x;
	printf("enter no. of elements:\n");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("enter the element to search:\n");
	scanf("%d",&x);
	int r=binary_search(a,0,n-1,x);
	if(r==-1)
		printf("Element is not found in the array\n" );
	else
		printf("%d element is at %d position in the the array\n",x,r);
}
