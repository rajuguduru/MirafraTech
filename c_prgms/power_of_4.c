#include<stdio.h>

int powerof(int n)
{
	int i,count=0;
	if((n!=4)&&((n&n-1)==0))
	{
		while(n)
		{
			if((n&1)==0)
			{
				count++;
				n=n>>1;
			}
			else
				return count;
		}
	}
	else
		return 1;
}
int main()
{
	int n;
	printf("enter the value;\n");
	scanf("%d",&n);
	int a=powerof(n);
	if((a%2)==0)
	{
		printf("It is power of four\n");
	}
	else
		printf("not");

}

