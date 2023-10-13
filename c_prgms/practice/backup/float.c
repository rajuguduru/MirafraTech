#include<stdio.h>
#include<stdlib.h>
float myatof(char *s[])
{
	int i=0,j=0,c=-1;
	float r=0;
	for(;s[i][j]!='\0';j++)
	{
		if(s[i][j]=='.')
		{
			c=0;
			continue;
		}
		r=(r*10)+(s[i][j]-48);
		if(c!=-1)
			c++;
	}
	for(i=0;i<c;i++)
	{
		r/=10;
	}
	return r;
}

int main(int argc,char *s[])
{
	if(argc<3)
	{
		printf("Give proper arguments\n");
		exit(0);
	}
	float x;
	x=myatof(&s[1])+myatof(&s[2]);
	printf("Result=%f",x);
}
