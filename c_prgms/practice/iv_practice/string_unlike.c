#include<stdio.h>

int main()
{
	char a[50]="abcxabcyabc1abc";
	char s[256]={0};
	int i,j,c=1;

	for(i=0;i<50;i++)
	{
		s[a[i]]++;
	}
	
	for(i=0;i<256;i++)
	{
		if(s[i]==1)
		printf("%c",i);
	}
}
