#include<stdio.h>

int main()
{
	unsigned int number= 5;

	if((number&(1<<31)))
		printf("1");
	else 
		printf("0");
	printf("\n%d\n%u\n",number,number);
}
