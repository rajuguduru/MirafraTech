/*#include<stdio.h>

int main()
{
	int n,xor=0;
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
		xor^=a[i];
	}
	for(i=1;i<=n-1;i++)
	xor^=i;
	printf("reapted element: %d\n",xor);
}*/
#include<stdio.h>

int main()
{
	int n,i,r=0;
	printf("Enter the no.of elements(odd):\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements that should only one number should odd occurence:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	for(i=0;i<n;i++)
	{
		r=r^a[i];
	}
	printf("odd occurence:%d\n",r);
}

