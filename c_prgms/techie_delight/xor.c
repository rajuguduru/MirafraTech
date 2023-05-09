#include<stdio.h>

int main()
{
	 int x,y;
	//with ^ 
	printf("enter the 2 numbers:\n");
	scanf("%d%d",&x,&y);
	printf("With EX-OR =%d\n",x^y);
	//without exor
	printf("Without EX-OR =%d\n",(x|y)-(x&y));
	// without using bitwise
	printf("without using bitwise:%d\n",((~x)*y)+((~y)*x));	
}
