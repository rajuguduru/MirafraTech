#include <stdio.h>
int power(int a,int b)
{
	if(b==0)
		return 1;
	int p=a;
	int q=a;
	for(int i=1;i<b;i++)
	{
		for(int j=1;j<a;j++)
		{
			p+=q;
		}
		q=p;
	}
	return p;
}
int binaryToDecimal(long long  n)
{
	int i=0,s=0,r=0;
	while(n)
	{
		r=n%10;
		n=n/10;
		int p;
		p=power(2,i);
		s+=(r*p);
		i++;
	}
	return s;
}
int main() 
{
	long long  b;
	printf("Enter a binary number: ");
	scanf("%lld", &b);
	int d = binaryToDecimal(b);
	printf("Decimal equivalent of %lld is %d\n", b,d);
	return 0;
}
