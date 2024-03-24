#include<stdio.h>

void triplate_array(int a[],int n,int target)
{
	int i,j,k=0;
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			for(k=j+1;k<n;k++)
			{
				if(a[i]+a[j]+a[k]==target)
				{
					printf("{%d %d %d}\n",a[i],a[j],a[k]);
				}
			}
		}

	}

}
	

int main()
{
	int a[]={2,7,4,0,9,5,1,3};
	
	int target=6;
	int n=sizeof(a)/sizeof(a[0]);
	triplate_array(a,n,target);
}

