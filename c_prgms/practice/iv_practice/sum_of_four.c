#include<stdio.h>


int main()
{
	int a[5]={1,3,4,5,2};
	int min,max,i,sum=0;
	
	min=max=a[0];
	for(i=0;i<5;i++)
	{
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
		sum+=a[i];
	}
	
	printf("minimum sum of 4 elements=%d\nmaximum sum of 4 elements=%d\n",sum-max,sum-min);


}
