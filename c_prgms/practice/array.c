#include<stdio.h>
void myarray(int a[],int n)
{
	a[1]=5;
}
int main()
{
	int arr[5]={1,2,3,4,5};
	myarray(arr,5);
	printf("%d",arr[1]);
}

