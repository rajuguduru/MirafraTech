#include<stdio.h>

int main()
{
	char s[50]="Hi Good Morning hw";
	
	int i=0,j=1;
	
	for(i=0;s[i]!=0;i++)
	{
		if(s[i]==32)
		{
			j++;
		}
	}
	printf("words:%d\n",j);
	
}
