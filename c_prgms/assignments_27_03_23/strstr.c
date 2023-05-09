#include<stdio.h>
int mystrcmp(char s[],char sub[],int i)
{
	for(int j=0;sub[j];j++,i++)
	{
		if(s[i]>sub[j])
			return -1;
		if(s[i]<sub[j])
			return -1;
	}	
	return 0;
}

int mystrstr (char s[],char sub[])
{
	int i,j=0;
	for(i=0;s[i];i++)
	{
		if(s[i]==sub[j])
		{
			int a=mystrcmp(s,sub,i);
			if(a==0)
				return i;	
		}
	}
	return -1;
}
int main()
{
	char s[100];
	char sub[100];
	printf("enter the first string;\n");
	scanf("%[^\n]",s);
	printf("enter the sub string:\n");
	scanf(" %[^\n]",sub);
	int a=mystrstr(s,sub);
	if(a!=-1)
		printf("sub string present at :%d position\n",a);
	else
		printf("No substring present\n");
}

