//Given a binary array, sort it in linear time and constant space. The output should print all zeroes, followed by all ones.

#include<stdio.h>

int main()
{
	int n,i;
	printf("Enter the number of elements:\n");
	scanf("%d",&n);
	int a[n],count=0;
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==0)
			count++;
	}
	for(i=0;i<count;i++)
	{
		a[i]=0;
	}
	for(count;count<n;count++)
	{
		a[count]=1;
	}
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	}	
}
