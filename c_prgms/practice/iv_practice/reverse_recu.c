#include<stdio.h>

int reverse_rc(int n)
{	
	static int i=0;
	static int j=3;
	if(i>=j)
		return n;
	if(!(n&(1<<i))!=!(n&(1<<j)))
	{
		n=n^(0x1<<i);
		n=n^(0x1<<j);
	}
	i++;
	j--;
	return reverse_rc(n);
}

int main()
{
	int n=5;

	int num=reverse_rc(n);
	printf("%d",num);
}
