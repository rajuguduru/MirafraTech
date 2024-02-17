#include<stdio.h>


int main()
{
	char c,s[30]="bazleballa";
	int i=0,j=0,count=0,max=0;
	
	for(i=0;s[i]!=0;i++)
	{
		count=0;	
		for(j=i;s[j]!=0;j++)
		{
			if(s[i]==s[j])
			count++;	
		}	
		if(count>=max)
		{
			c=s[i];
			max=count;
		}	
		
	}
	printf("%c",c);
}
