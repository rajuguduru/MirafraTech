#include<stdio.h>


int main()
{
	int a[5],b[5],temp[11]={0};
	int i=0,j=0,k=0;

	printf("Enter array 1 elements:\n");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	printf("Enter array 2 elements:\n");
	for(i=0;i<5;i++)
		scanf("%d",&b[i]);
	printf("Common elements:\n");

	for(i=0;i<5;i++)
	{
		temp[a[i]]++;
		temp[b[i]]++;
	}

	for(i=0;i<=10;i++)
	{
		if(temp[i]>1)
			printf("%d ",i);
	}
}
