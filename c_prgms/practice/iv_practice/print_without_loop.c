#include<stdio.h>
void display(unsigned int n)

{

	if(n > 0)

	{

		display(n-1);

		printf("%d ", n);

	}

}

int main()
{
	display(100);
}
