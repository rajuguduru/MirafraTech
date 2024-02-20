#include<stdio.h>

int main()
{
	int i=0,j=0,miss=0,a[9]={1,3,4,2,5,6,9,8};

	for(i=0;i<9;i++)
	{
		for(j=i+1;j<9;j++)
		{
			if(a[j]<a[i])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;	
			}
		}
	}
		
	
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<9;j++)
		{
			if((a[j]-a[i])!=1)
			{
				miss=a[j]-1;
				break;
			}
		}

	}
	printf("missing number=%d",miss);
	
}
