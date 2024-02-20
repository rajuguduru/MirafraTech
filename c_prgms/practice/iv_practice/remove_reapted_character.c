#include<stdio.h>


int main()
{
	char temp,s[50]="hi hello is ok";

	int i=0,j=0,k=0,c=0;
	for(;s[i]!=0;i++)
	{
		for(j=i+1;s[j]!=0;j++)
		{
			if(s[i]==s[j]&&s[j]!=32)
			{
				for(k=j;s[k]!=0;k++)
				{
					s[k]=s[k+1];
				}
				c++;	
					j--;
			}
		}
	}
	printf("%s",s);
}
