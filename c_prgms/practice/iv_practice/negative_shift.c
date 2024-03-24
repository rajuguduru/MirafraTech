#include<stdio.h>


void Decimal_to_binary( signed int n)
{
	int i=31,a[32]={0};
	
	while(n)
	{
		a[i--]=n%2;
		n=n/2;	
	}
	for(i=0;i<32;i++)
	printf("%d",a[i]);

}


int main()
{
	signed int n=-12;
	
	//if(((n>>31)&1)==1)
	printf("Sign Bit is %d\n",(n&(1<<31)));

	//Decimal_to_binary(n);
	
}
