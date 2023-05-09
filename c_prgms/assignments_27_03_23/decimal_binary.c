#include<stdio.h>
void decimal_binary(int x,int n,char a[])
{
	while(x)
	{
		a[n]=(x%2);
		x=x/2;
		n--;
	}
}
int main()
{
	int x,i;
	printf("enter the decimal number:\n");
	scanf("%d",&x);
	int n=31;
	char a[31]={0};
	decimal_binary(x,n,a);
	for(i=0;i<=n;i++)
	{
		printf("%d",a[i]);
	}
}
