#include<stdio.h>

int main()
{
	int min,max,i,j,a[10]={1,3,2,4,590,8,7,6,-23,10};
	min=a[0];
	max=a[0];

	for(i=0;i<10;i++)
	{
		if(min>a[i])
			min=a[i];
		if(max<a[i])
			max=a[i];
	}
	printf("Max=%d\nMin=%d\n",max,min);
	
}

