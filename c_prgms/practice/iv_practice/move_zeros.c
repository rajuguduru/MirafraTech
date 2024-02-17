#include<stdio.h>

int main()
{
	int i=0,j=0,count=0,a[6]={1,0,2,4,0,3};
	
	for(i=0;i<6;i++)
	{
		if(a[i]==0)
		{
			for(j=i;j<6;j++)
			{
				a[j]=a[j+1];
			}
			count++;
		}
		
		
	}
	for(i=6-count;i<6;i++)
	{
		a[i]=0;
	}
	for(i=0;i<6;i++)
	printf("%d ",a[i]);
}
