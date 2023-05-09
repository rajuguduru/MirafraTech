#include<stdio.h>

int isprime(int num) 
{
	/*if(num < 2) 
	{
		return 0;
	}*/
	for(int i = 2; i <= num/2; i++) 
	{
		if(num % i == 0) 
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int r=2;
	//Compilation Status
	r=isprime(1);
	printf("\n");
	if(r==0||r==1)
		printf("Compilation Successful\n\n");
	else
		printf("Compilation Fail\n");
		printf("===***==***===***==***===***==***==\n\n");
	if(r==0||r==1)
	{
		//Test Case 1
		if(isprime(2)==1)
			printf("Tast Case 1 is Passed\n\n");
		else
			printf("Tast Case 1 is Failed\n\n");
		//Test Case 2
		if(isprime(0)==0)
			printf("Tast Case 2 is Passed\n\n");
		else
			printf("Tast Case 2 is Failed\n\n");
		//Test case 3
		if(isprime(5)==1)
			printf("Test Case 3 is Passed\n\n");
		else
			printf("Test Case 3 is Failed\n\n");
		//Test Case 4
		if(isprime(6)==0)
			printf("Test Case 4 is Passed\n\n");
		else
			printf("Test Case 4 is Failed\n\n");
		//Test Case 5
		if(isprime(9)==0)
			printf("Test Case 5 is Passed\n\n");
		else
		printf("Test Case 5 is Failed\n\n");
	}
}
