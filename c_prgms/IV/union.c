#include<stdio.h>

union x
{
	int x;
	int y;
}u;

int main()
{
	u.x=10;
	u.y=20;
	printf("x=%d\ny=%d",u.x,u.y);
}
