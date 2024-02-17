#include<stdio.h>
void binary_function(int n)
{
	int i,m=32;
	int a[32]={0};
	while(n)
	{

		a[--m]=n%2;
		n=n/2;
	}
	for(i=0;i<32;i++)
	{	
		printf("%d ",a[i]);
	}
}
int main()
{
	int n;

	printf("Enter the Decimal Number\n");
	scanf("%d",&n);
	binary_function(n);
}
