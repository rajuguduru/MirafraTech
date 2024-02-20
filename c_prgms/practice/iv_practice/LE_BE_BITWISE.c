#include<stdio.h>


int main()
{
	int n;
	scanf("%x",&n);
	printf("Before:%x",n);	
	n=((n&0x000000FF)<<24)|((n&0xFF000000)>>24)|((n&0x00FF0000)>>8)|((n&0x0000FF00)<<8);
	printf("after:%x",n);	

//	printf("%d",n);
	
}
