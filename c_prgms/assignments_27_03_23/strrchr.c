#include<stdio.h>
int mystrrchr(char s[],char c)
{	
	int i,j=-1;
	for(i=0;s[i]!=0;i++)
	{
		if(s[i]==c)
			j=i;

	}
	return j;
}
int main()
{
	char c,s[100];
	printf("enter the string;\n");
	scanf("%[^\n]s",s);
	printf("enter the character to search:\n");
	scanf(" %c",&c);
	int a=mystrrchr(s,c);
	if(a!=-1)
		printf("the last occurence of the %c charcter is %d",c,a);
	else
		printf("char not found\n");
}
