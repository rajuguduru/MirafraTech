#include<stdio.h>
int decimal_binary(int x)
{
	int r;
		r=(x%16);
		x=x/16;
		return (x*10+r);
}
int main()
{
	int x;
	printf("enter the decimal number:\n");
	scanf("%d",&x);
	printf("Hex_Decimal===>%d",decimal_binary(x));
}

