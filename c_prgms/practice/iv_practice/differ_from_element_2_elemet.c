#include<stdio.h>

int main()
{
	int i=0,j=0,start=0,end=0,a[9]={1,3,2,4,9,8,7,5,6};

	int from=2,to=7;

	for(i=0;i<9;i++)
	{
		if(a[i]==from)
		{
			start=i;
			break;
		}
	}

	for(i=0;i<9;i++)
	{
		if(a[i]==to)
		{
			end=i;
			break;
		}
	}

	printf("Distance=%d\n",end-start);

}
