#include<stdio.h>

int main()
{
	int i=0,j=0,a[9]={1,9,7,3,2,6,5,8,4};
	
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<9;j++)
		{
			if(a[i]>a[j])
			{
				int t=a[i];
				a[i]=a[j];
				a[j]=t;

			}
		}
	}
	
	for(j=1;j<9;j=j+2)
	{
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;

	}

	for(i=0;i<9;i++)
	{
		printf("%d ",a[i]);
	}	
}
	
