#include<stdio.h>

int main()
{
	int n,c=0;
	printf("enter the value;\n");
	scanf("%d",&n);
	if(n==1)
		c=2;
	while((n&1)==0)
	{
		c++;
		n>>=1;
	}
	if(n==1&&(c&&c%2==0))
	{
		printf("It is power of four\n");
	}
	else
		printf("not");

}


