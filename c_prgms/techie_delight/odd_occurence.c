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
