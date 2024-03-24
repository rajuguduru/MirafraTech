#include<stdio.h>


int main()
{
	char s[100]="subsequence";
	char sub[20]="sue";
	int i,j,k,c=0;
	
	for(i=0;s[i]!=0;i++)
	{
		for(j=i+1;s[j]!=0;j++)
		{
			for(k=j+1;s[k]!=0;k++)
			{
				if((s[i]==sub[0])&&(s[j]==sub[1])&&(s[k]==sub[2]))
				c++;
			}
		}
	}
	printf(" count=%d ",c);
}
