#include<stdio.h>
#include<stdlib.h>
int removeDuplicates(int arr[], int n)
{
	if (n == 0 || n == 1)
		return n;

	int temp[n];
	int j = 0;

	for (int i = 0; i < n - 1; i++) {
		if (arr[i] != arr[i + 1])
			temp[j++] = arr[i];
	}

	temp[j++] = arr[n - 1];

	for (int i = 0; i < j; i++)
		arr[i] = temp[i];

	return j;
}

int main()
{
	int n,i;
	printf("enter the no.of elements\n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{	
		scanf("%d",&a[i]);
	}
	int j=0,k=0,count=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				k=a[i];
				a[i]=a[j];
				a[j]=k;
			}	
		}

	}
	n=removeDuplicates(a,n);
	for(i=0;i<n;i++)
	{
	printf("%d\t",a[i]);
	}
}
