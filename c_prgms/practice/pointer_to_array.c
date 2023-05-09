#include<stdio.h>

int  main()
{
	int arr[2][3]={{30,40,50},{60,70,80}};
	
	int (*p)[6]=&arr;
	
		p++;	
	printf("%d",*(*(p+0)+1));
}
