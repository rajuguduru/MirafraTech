// Swap 2 variables without 3rd variable   (x = x+y; y= x-y; x = x-y;)

#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the values of a and b:\n");
	scanf("%d%d",&a,&b);
/*	a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%d\nb=%d\n",a,b);
*/
	// 2nd method;
	a=a+b-(b=a);
	printf("a=%d\nb=%d\n",a,b);
}
