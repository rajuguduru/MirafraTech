#include<stdio.h>



int main()
{
	int a[5]={1,23,2,45,27};

	int i=0,sbig=0,big=0;
		
		big=sbig=a[0];
	for(i=1;i<5;i++)
	{	
		if(big<a[i])
		{
			sbig=big;
			big=a[i];
		}
		else if((sbig<a[i])&&a[i]!=big)
		sbig=a[i];
	}
	
	printf("Second big=%d",sbig);
}
