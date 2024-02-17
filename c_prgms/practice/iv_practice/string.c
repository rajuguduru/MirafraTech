#include<stdio.h>
#define max 256


int main()
{
	int a[256]={0};
	char s[20]="embeddedd";
	for(int i=0;s[i]!=0;i++)
	{
		char c=s[i];
		a[c]++;
		
	}
	printf("%d",a[95]);
}
